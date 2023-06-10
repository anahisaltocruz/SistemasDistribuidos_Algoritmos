/*
    10. Mediante uso de arreglos unidimensionales, permita que el usuario introduzca 10
    valores enteros y posteriormente los ordene de forma descendente.
*/
#include <stdio.h>
#include <string.h>

int main() {
    system("color D0");
    printf("\tI N I C I O  D E L  P R O G R A M A\n\n");
    int numNumeros = 10;
    int numeros[numNumeros];
    printf("Por favor introduzca los numeros enteros...\n");
    for(int i = 0; i<numNumeros; i++){
        printf("Numero %2d: ",i+1);
        scanf("%d",&numeros[i]);
    }

    int ordenar;
    do{
        ordenar = 1;
        for(int i = 0; i<(numNumeros - 1); i++){
            if(numeros[i] < numeros[i + 1]){
                int aux = numeros[i];
                numeros[i] = numeros[i + 1];
                numeros[i + 1] = aux;
                ordenar = 0;
            }
        }
    }while(ordenar == 0);
    printf("\nNumeros ordenados:\n");
    for(int i = 0; i<numNumeros; i++){
        printf("Numero %2d: %d\n",i+1,numeros[i]);
    }
    return 0;
}
