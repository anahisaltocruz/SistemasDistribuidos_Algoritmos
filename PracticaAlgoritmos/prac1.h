//PRÁCTICA 4
//ESTRUCTURA LISTA DOBLE - ARBOL BONARIO
#ifndef _LISTAS_H_ //SI NO ESTÁ DEFINIDA LA LIBRERÍA
#define _DEFINE_
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
//#define MAXIMO(i,d) (((i)>(d))?(i):(d))

typedef struct _Nodo{
    int frec;
    char carac;
    struct _Nodo* siguiente;   //PARA LA LISTA DOBLEMENTE ENLAZADA
    struct _Nodo* anterior;    //PARA LA LISTA DOBLEMENTE ENLAZADA

}Nodo;

Nodo *crear(int f, char c){
    Nodo *nuevo;
    nuevo = (Nodo *)malloc(sizeof(Nodo));
    nuevo->frec = f;
    nuevo->carac = c;
    nuevo->anterior = NULL;
    nuevo->siguiente = NULL;
    return nuevo;
}

Nodo *insertarFinalListaD(Nodo *inicio,int f, char c){
    Nodo *nuevo;
    nuevo = crear(f,c);
    if(inicio == NULL)
        inicio = nuevo;
    else{
        Nodo *aux;
        aux = inicio;
        while(aux->siguiente != NULL){
            aux = aux->siguiente;
        }
        aux->siguiente = nuevo;
        nuevo->anterior = aux;
    }
    return inicio;
}
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

//VER LA LISTA
void ver(Nodo *inicio){
    if(inicio == NULL)
        printf("\nLA LISTA ESTA VACIA\n");
    else{
        printf("CHAR\t\tFREC\n");
        while(inicio != NULL){
            printf("\n%c\t\t%d",inicio->carac,inicio->frec);
            inicio=inicio->siguiente;
        }
        printf("\n");
    }
}

int numElementosLA(Nodo *inicio){
    int i=0;
    if(inicio != NULL){
        while(inicio != NULL){
           i++;
           inicio=inicio->siguiente;
        }
    }
    return i;
}

Nodo* ordenarListaA(Nodo* listaA){
    int i, f;
    char c;
    Nodo* aux = NULL; //este es el "iterador" de la lista
    Nodo* aux2 = NULL;
    aux = listaA;
    for(i=0;i<numElementosLA(listaA);i++){
        aux2 = aux;
        c = aux2->carac;
        f = aux2->frec;
        while(aux2->anterior != NULL && aux2->anterior->frec > f){
            aux2->frec = aux2->anterior->frec;
            aux2->carac = aux2->anterior->carac;
            aux2 = aux2->anterior;//s
        }
        aux2->frec = f;
        aux2->carac = c;
        aux = aux->siguiente;
    }
    return listaA;
}

#endif
