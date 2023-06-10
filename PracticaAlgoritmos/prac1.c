/*
    1. Dado el mensaje de entrada: “Los sistemas distribuidos se definen como un con-
    junto de terminales o conjunto de dispositivos que permiten ejecutar una sola tarea
    compleja entre todos los dispositivos o un grupo de tareas por cierto número de
    nodos”, mediante barras horizontales, imprimir el histograma correspondiente a la
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
            if(textoA[i] == 'Á' || textoA[i] == 'á')
                textoA[i] = 'A';
                else if(textoA[i] == 'É' || textoA[i] == 'é')
                    textoA[i] = 'E';
                else if(textoA[i] == 'Í' || textoA[i] == 'í')
                    textoA[i] = 'I';
                else if(textoA[i] == 'Ó' || textoA[i] == 'ó')
                    textoA[i] = 'O';
                else if(textoA[i] == 'Ú' || textoA[i] == 'ú')
                    textoA[i] = 'U';
                else if(isspace(textoA[i]))
                    textoA[i] = '*';
            textoA[i] = toupper(textoA[i]);     //CONVIERTE A MAYÚSCULAS
            lista = aumentarFrec(lista,1,textoA[i]);
        }
        //printf("Cadena leida: %s\n",textoA);
        //printf("\n\n");
        //ver(lista);
    }
    printf("  ===============================================================================================\n");
    printf("  %c Caracter %c Frecuencia %c Histograma\n",186,186,186);
    printf("  ===============================================================================================\n");
    //int j = 1;
    int k;
    Nodo *inicio = lista;
    while(inicio != NULL){
        printf("  %c    %c     %c     %2d     %c ",186,inicio->carac,186,inicio->frec,186);
        //printf("%c \t%d",inicio->carac,inicio->frec);
        for(k = 0; k<inicio->frec; k++){
            printf("%c ",254);
        }
        printf("\n");
        inicio=inicio->siguiente;
        //j++;
    }
    //printf("\n");
    printf("  ===============================================================================================\n");
    return 0;
}
/*
//PARA MODIFICAR LA FRECUENCIA E IR CREANDO LA LISTA
Nodo* aumentarFrec(Nodo *inicio, int f, char c){
    Nodo *aux;
    aux = inicio;
    while(aux != NULL){
        if(c == aux->carac){
            aux->frec++;
            break;
        }
        aux = aux->siguiente;
    }if(aux == NULL)
        inicio = insertarFinalListaD(inicio,f,c);
    return inicio;
}



    printf("PRACTICA 4  -  CODIFICACION HUFFMAN\nSALTO CRUZ ANAHI\n");
    char nombreArch[15];
    Nodo* listA = NULL;            //DECLARACIÓN DEL NODO LISTA - ÁRBOL
    char textoA[30];
    printf("\nINGRESE EL NOMBRE DEL ARCHIVO DE TEXTO QUE DESDEA LEER: ");
    gets(nombreArch);
    strcat(nombreArch,".txt");
    FILE *archLec = fopen(nombreArch,"r");
    if(archLec == NULL){
        printf("HUBO UN ERROR AL INTENTAR LEER EL ARCHIVO\n");
        return -1;
    }else {
        while(!feof(archLec)){
            fgets(textoA,30,archLec);
        }
        fclose(archLec);
        //printf("TextoA: %s, largo: %d\n",textoA,strlen(textoA));
        for(int i = 0;i<(strlen(textoA));i++){
            if(textoA[i] == 'Á' || textoA[i] == 'á')
                textoA[i] = 'A';
            else if(textoA[i] == 'É' || textoA[i] == 'é')
                textoA[i] = 'E';
            else if(textoA[i] == 'Í' || textoA[i] == 'í')
                textoA[i] = 'I';
            else if(textoA[i] == 'Ó' || textoA[i] == 'ó')
                textoA[i] = 'O';
            else if(textoA[i] == 'Ú' || textoA[i] == 'ú')
                textoA[i] = 'U';
        }

        for(int i = 0;i<(strlen(textoA));i++){
            textoA[i] = toupper(textoA[i]);     //CONVIERTE A MAYÚSCULAS
            if(isspace(textoA[i]))
                listA = aumentarFrec(listA,1,'-');  //AUMENTARFREC LLAMA A LA FUNCIÓN DE INSERTARFINAL
            else
                listA = aumentarFrec(listA,1,textoA[i]);
        }
    }
    //ver(listA);
    listA = ordenarListaA(listA);
    */
    //Los sistemas distribuidos se definen como un conjunto de terminales o conjunto de dispositivos que permiten ejecutar una sola tarea compleja entre todos los dispositivos o un grupo de tareas por cierto número de nodos

