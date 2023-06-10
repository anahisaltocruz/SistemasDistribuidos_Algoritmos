/*
    8. Realice un programa que permita imprimir el mayor de 3 enteros introducidos por el
    usuario.
*/
#include <stdio.h>
#include <string.h>

int main() {
    system("color D0");
    printf("\tI N I C I O  D E L  P R O G R A M A\n\n");
    int numNumeros = 3;
    int numeros[numNumeros];
    printf("Por favor introduzca los numeros enteros...\n");
    for(int i = 0; i<numNumeros; i++){
        printf("Numero %d: ",i+1);
        scanf("%d",&numeros[i]);
    }
    int numMayor = 0;
    for(int i = 0; i<numNumeros; i++){
        if(numeros[i] > numMayor){
            numMayor = numeros[i];
        }
    }
    printf("El numero mayor es: %d\n\n",numMayor);
    return 0;
}
