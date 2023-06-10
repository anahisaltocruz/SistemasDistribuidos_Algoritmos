/*
    6. Implemente un programa que permita imprimir cada palabra que entre por linea de
    comando en forma descendente de acuerdo a su frecuencia de ocurrencia. Antes de
    cada palabra debe aparecer el conteo de palabras.
*/
#include <stdio.h>
#include <string.h>
#include "prac6.h"

int main() {
    system("color D0");
    printf("\tI N I C I O  D E L  P R O G R A M A\n\n");
    char cadena[300];
    Nodo* lista = NULL;
    printf("Ingrese una cadena: ");
    fflush(stdin);
    fgets(cadena, sizeof(cadena), stdin);
    printf("\n\n");


    //char cadena[] = "Hola,mundo,soy,una,cadena,separa,por,comas",
    char delimitador[] = " ";
    cadena[strcspn(cadena, "\n")] = '\0';   //Permite quitar el último caracter de la cadena (el salto de linea)
    char *token = strtok(cadena, delimitador);
    if(token != NULL){
        while(token != NULL){
            // Sólo en la primera pasamos la cadena; en las siguientes pasamos NULL
            //printf("Palabra: %s\n", token);
            //printf("Longitud: %d\n\n",strlen(token));
            lista = aumentarFrec(lista,1,token);
            token = strtok(NULL, delimitador);
        }
    }
    ver(lista);
    printf("\n\nLista ordenada:\n");
    lista = ordenarListaA(lista);
    ver(lista);
    return 0;
}
