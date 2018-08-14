#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
   char cad1[20],cad2[20],anagrama;
   int i,j,z,k,ptr;
   printf("\n ingrese una palabra: ");
   scanf("%s",cad1);
   printf("\n ingrese otra palabra: ");
   scanf("%s",cad2);
   if((strlen(cad1))==(strlen(cad2)))
      {
      for(i=0;i<strlen(cad1)-1;i++)
         for(j=i+1;j<strlen(cad1);j++)
            if(cad1[j]>=cad1[i])
            {
               anagrama=cad1[j];
               cad1[j]=cad1[i];
               cad1[i]=anagrama;
            }
      for(z=0;z<strlen(cad2)-1;z++)
         for(k=z+1;k<strlen(cad2);k++)
            if(cad2[k]>=cad2[z])
            {
               anagrama=cad2[k];
               cad2[k]=cad2[z];
               cad2[z]=anagrama;
            }
      ptr=strcmp(cad1,cad2);
      if(ptr==0)
         printf("\n son anagrama");
      else
         printf("\n no son anagrama");
      }
   else
      printf("\n no son anagrama");

      system("pause");

      return 0;

}
