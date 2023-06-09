/*
    1. Dado el mensaje de entrada: �Los sistemas distribuidos se definen como un con-
    junto de terminales o conjunto de dispositivos que permiten ejecutar una sola tarea
    compleja entre todos los dispositivos o un grupo de tareas por cierto n�mero de
    nodos�, mediante barras horizontales, imprimir el histograma correspondiente a la
    frecuencia con la que se presentan los caracteres del mensaje.
*/
#include <stdlib.h>
#include <stdio.h>
#include "prac1.h"

int main(){
    system("color D0");
    FILE *archLec = fopen("texto1.txt","r");
    char textoA[500];
    Nodo* lista = NULL;
    if(archLec == NULL){
        printf("HUBO UN ERROR AL INTENTAR LEER EL ARCHIVO\n");
        return -1;
    }else {
        printf("\t\t\tI N I C I O  D E L  P R O G R A M A\n\n");
        while(!feof(archLec)){
            fgets(textoA,sizeof(textoA),archLec);
        }
        fclose(archLec);
        printf(" Cadena leida: %s\n\n\n",textoA);
        printf("NOTA: Todos los caracteres son convertidos a mayusculas y los acentos se ignoran\n");
        printf("      Los espacios son representados por '*' en el histograma\n\n\n\n\n");
        //printf("TextoA: %s, largo: %d\n",textoA,strlen(textoA));
        for(int i = 0;i<(strlen(textoA));i++){
            if(textoA[i] == '�' || textoA[i] == '�')
                textoA[i] = 'A';
                else if(textoA[i] == '�' || textoA[i] == '�')
                    textoA[i] = 'E';
                else if(textoA[i] == '�' || textoA[i] == '�')
                    textoA[i] = 'I';
                else if(textoA[i] == '�' || textoA[i] == '�')
                    textoA[i] = 'O';
                else if(textoA[i] == '�' || textoA[i] == '�')
                    textoA[i] = 'U';
                else if(isspace(textoA[i]))
                    textoA[i] = '*';
            textoA[i] = toupper(textoA[i]);     //CONVIERTE A MAY�SCULAS
            lista = aumentarFrec(lista,1,textoA[i]);
        }
    }
    printf("  ===============================================================================================\n");
    printf("  %c Caracter %c Frecuencia %c Histograma\n",186,186,186);
    printf("  ===============================================================================================\n");
    int k;
    Nodo *inicio = lista;
    while(inicio != NULL){
        printf("  %c    %c     %c     %2d     %c ",186,inicio->carac,186,inicio->frec,186);
        for(k = 0; k<inicio->frec; k++){
            printf("%c ",254);
        }
        printf("\n");
        inicio=inicio->siguiente;
    }
    printf("  ===============================================================================================\n");
    return 0;
}
