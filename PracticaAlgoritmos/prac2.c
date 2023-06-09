/*
    2. Implementar un programa que permita invertir una cadena de caracteres (La cadena
    debe ser introducida por el usuario). Se debe imprimir la cadena ya invertida y la
    original.
*/
#include <stdio.h>
#include <string.h>

void invertirString(char* str) {
    int longitud = strlen(str);
    int i, j;
    char temp;

    // Intercambiar caracteres desde ambos extremos hacia el centro
    for (i = 0, j = longitud - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char str[100];

    printf("Ingrese una cadena: ");
    fgets(str, sizeof(str), stdin);

    // Eliminar el salto de línea del final de la cadena
    str[strcspn(str, "\n")] = '\0';

    invertirString(str);

    printf("Cadena invertida: %s\n", str);

    return 0;
}
