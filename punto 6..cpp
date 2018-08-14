#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int _find(char* cadena, char* palabra){

    int i, j = 0;

    for(i = 0; i < strlen(cadena); i++){
        if(palabra[j] == cadena[i]){
            ++j;

            if(j == strlen(palabra))
                return (2 + i - j);
        }

        else j = 0;
    }

    return -1;
}


int main(){

    int pos;
    char cadena[100],
         palabra[100];

    printf("Ingrese la cadena: ");
    gets(cadena);

    printf("Ingrese la palabra a buscar: ");
    gets(palabra);

    pos = _find(cadena, palabra);

    if(pos == -1)
        printf("La cadena no esta,0!\n");

    else
        printf("La cadena empieza en la posicion %d.!\n", pos);

    system("Pause");

    return 0;
    }
