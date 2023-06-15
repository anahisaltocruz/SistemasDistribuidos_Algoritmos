/*
    9. Escriba un programa que permita imprimir los contornos de: Un cuadrado, un ovalo,
    una flecha, un diamante y un triángulo.
*/
#include<stdio.h>
#include <math.h>

void imprimirCuadrado(int lado){
    int i, j;
    for (i = 0; i < lado; i++){
        for (j = 0; j < lado; j++){
            if (i == 0 || i == lado - 1 || j == 0 || j == lado - 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

void imprimirOvalo(int altura, int ancho){
    int i, j;
    for (i = 0; i < altura; i++) {
        for (j = 0; j < ancho; j++) {
            if ((i == 0 && (j >= 2 && j <= 7)) || (i == 1 && (j == 1 || j == 8)) || (i == 2 && (j == 0 || j == 9)) ||
                (i == 3 && (j == 0 || j == 9)) || (i == 4 && (j == 1 || j == 8)) || (i == 5 && (j >= 2 && j <= 7)))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

void imprimirFlecha(int altura) {
    int i, j;
    // Imprimir la punta de la flecha
    for (i = 0; i < altura / 2; i++){
        for (j = 0; j < altura; j++){
            if (j == altura / 2 - i || j == altura / 2 + i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    // Imprimir el tallo de la flecha
    for (i = 0; i < altura / 2 + 1; i++){
        for (j = 0; j < altura; j++) {
            if (j == altura / 2)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

void imprimirDiamante(int altura){
    int i, j;
    int espacios = altura / 2;
    int asteriscos = 1;
    for (i = 0; i < altura; i++) {
        for (j = 0; j < espacios; j++) {
            printf(" ");
        }
        printf("*");
        for(j = 0; j < asteriscos - 2; j++){
            if (i == 0 || i == altura - 1)
                printf("*");
            else
                printf(" ");
        }
        if(asteriscos > 1)
            printf("*");
        printf("\n");
        if(i < altura / 2){
            espacios--;
            asteriscos += 2;
        } else{
            espacios++;
            asteriscos -= 2;
        }
    }
}

void imprimirTriangulo(int altura){
    int i, j;
    for (i = 0; i < altura; i++){
        for (j = 0; j <= i; j++){
            if (i == altura - 1 || j == 0 || j == i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

int main(){
    int ladoCuadrado, alturaOvalo, anchoOvalo, alturaFlecha, alturaDiamante, alturaTriangulo;
    printf("\t\t\tI N I C I O  D E L  P R O G R A M A\n\n");
    printf("Ingrese el lado del cuadrado: ");
    scanf("%d", &ladoCuadrado);
    printf("Cuadrado:\n");
    imprimirCuadrado(ladoCuadrado);
    printf("\n");

    printf("Ingrese la altura y el ancho del ovalo: ");
    scanf("%d %d", &alturaOvalo, &anchoOvalo);
    printf("Óvalo:\n");
    imprimirOvalo(alturaOvalo, anchoOvalo);
    printf("\n");

    printf("Ingrese la altura de la flecha: ");
    scanf("%d", &alturaFlecha);
    printf("Flecha:\n");
    imprimirFlecha(alturaFlecha);
    printf("\n");

    printf("Ingrese la altura del diamante: ");
    scanf("%d", &alturaDiamante);
    printf("Diamante:\n");
    imprimirDiamante(alturaDiamante);
    printf("\n");

    printf("Ingrese la altura del triángulo: ");
    scanf("%d", &alturaTriangulo);
    printf("Triángulo:\n");
    imprimirTriangulo(alturaTriangulo);
    printf("\n");

    return 0;
}
