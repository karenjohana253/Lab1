#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
      char arreglo_desordenado[32];
      char arreglo_ordenado[32];
      int longitud;
      int i;
      int j;
      char x;

      printf("\n ingrese una palabra");
      scanf("%s",arreglo_desordenado);

      longitud=strlen(arreglo_desordenado);
      strcpy(arreglo_ordenado,arreglo_desordenado);

      for(i = 1; i < longitud; i++)
                 for(j=0;j<longitud-i;j++)
                 {
                 if((tolower(arreglo_ordenado[j]))>(tolower(arreglo_ordenado[j+1])))

                 {
                 x=arreglo_ordenado[j];
                arreglo_ordenado[j]=arreglo_ordenado[j+1];
                arreglo_ordenado[j+1]=x;
                 }
                 }
      printf("la palabra era: %s\n",arreglo_desordenado);
      printf("la palabra ordenada es: %s\n",arreglo_ordenado);


}
