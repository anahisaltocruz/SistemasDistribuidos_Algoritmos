/*
    Utilizando estructuras de control de flujo, implementar un programa que lea un
    archivo de texto (1 párrafo de 5 líneas de propuesta libre) y cuente los dígitos, espacios
    en blanco y caracteres especiales (signos de puntuación). El programa debe imprimir
    el total de cada tipo de símbolo solicitado.
*/
#include <stdlib.h>
#include <stdio.h>
#include "prac3.h"

int main(){
    system("color D0");
    FILE *archLec = fopen("texto3.txt","r");
    char textoA[500];
    char aux[100];
    Nodo* lista = NULL;
    if(archLec == NULL){
        printf("HUBO UN ERROR AL INTENTAR LEER EL ARCHIVO\n");
        return -1;
    }else {
        printf("\t\t\tI N I C I O  D E L  P R O G R A M A\n\n");
        while(!feof(archLec)){
            fgets(aux,sizeof(aux),archLec);
            strcat(textoA,aux);
        }
        fclose(archLec);
        printf(" Cadena leida: %s\n\n\n",textoA);
        for(int i = 0;i<(strlen(textoA));i++){
            if(textoA[i] != '\n')
                lista = aumentarFrec(lista,1,textoA[i]);
        }
    }
    printf("  =========================\n");
    printf("  %c Caracter %c Frecuencia %c\n",186,186,186);
    printf("  =========================\n");
    //int j = 1;
    int k;
    Nodo *inicio = lista;
    while(inicio != NULL){
        printf("  %c    %c     %c     %2d     %c ",186,inicio->carac,186,inicio->frec,186);
        printf("\n");
        inicio = inicio->siguiente;
    }
    printf("  =========================\n");
    return 0;
}
