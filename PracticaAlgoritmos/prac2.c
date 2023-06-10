/*
    2. Implementar un programa que permita invertir una cadena de caracteres (La cadena
    debe ser introducida por el usuario). Se debe imprimir la cadena ya invertida y la
    original.
*/
#include <stdio.h>
#include <string.h>

char* invertirCadena(char* str) {
    int longitud = strlen(str);
    //printf("Longitud: %d\n",longitud);
    int i, j;
    char aux;
    // Intercambiar caracteres desde ambos extremos hacia el centro
    for (i = 0, j = longitud - 2; i < j; i++, j--) {
        aux = str[i];  //Se guarda el caracter de la primera posici�n (avanzando hacia adelante)
        str[i] = str[j]; //A la primera posici�n (avanzando hacia adelante) se le asigna la �ltima
        str[j] = aux;  //A la �ltima posici�n (avanzando hacia atr�s) se le asigna el primer valor de la cadena
        //El ciclo for se detiene cuando se ha llegado a la mitad de la cadena
    }
    return str;
}

int main() {
    system("color D0");
    char oracion[100];
    printf("\tI N I C I O  D E L  P R O G R A M A\n\n");
    printf("Ingrese una cadena: ");
    fgets(oracion, sizeof(oracion), stdin);
    printf("\n\n");
    printf("Cadena invertida:   %s\n", invertirCadena(oracion));
    return 0;
}
