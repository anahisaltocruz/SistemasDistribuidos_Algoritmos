#ifndef _LISTAS_H_ //SI NO ESTÁ DEFINIDA LA LIBRERÍA
#define _DEFINE_
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
//#define MAXIMO(i,d) (((i)>(d))?(i):(d))

typedef struct _Nodo{
    int frec;
    char palabra[20];
    struct _Nodo* siguiente;   //PARA LA LISTA DOBLEMENTE ENLAZADA
    struct _Nodo* anterior;    //PARA LA LISTA DOBLEMENTE ENLAZADA

}Nodo;

Nodo *crear(int f, char p[20]){
    Nodo *nuevo;
    nuevo = (Nodo *)malloc(sizeof(Nodo));
    nuevo->frec = f;
    strcpy(nuevo->palabra,p);
    //nuevo->palabra = p;
    nuevo->anterior = NULL;
    nuevo->siguiente = NULL;
    return nuevo;
}

Nodo *insertarFinalListaD(Nodo *inicio,int f, char palabra[20]){
    Nodo *nuevo;
    nuevo = crear(f,palabra);
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
Nodo* aumentarFrec(Nodo *inicio, int f, char p[20]){
    Nodo *aux;
    aux = inicio;
    while(aux != NULL){
        //if(palabra == aux->palabra){
        if(strcmp(p,aux->palabra) == 0){
            aux->frec++;
            break;
        }
        aux = aux->siguiente;
    }if(aux == NULL)
        inicio = insertarFinalListaD(inicio,f,p);
    return inicio;
}

//VER LA LISTA
void ver(Nodo *inicio){
    if(inicio == NULL)
        printf("\nLA LISTA ESTA VACIA\n");
    else{
        printf("FREC\t\tPALABRA\n");
        while(inicio != NULL){
            printf("\n%d\t\t%s",inicio->frec,inicio->palabra);
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
    char p[20];
    Nodo* aux = NULL; //este es el "iterador" de la lista
    Nodo* aux2 = NULL;
    aux = listaA;
    for(i=0;i<numElementosLA(listaA);i++){
        aux2 = aux;
        //p = aux2->palabra;
        strcpy(p,aux2->palabra);
        f = aux2->frec;
        while(aux2->anterior != NULL && aux2->anterior->frec < f){//cambiar la desigualdad
            aux2->frec = aux2->anterior->frec;
            strcpy(aux2->palabra,aux2->anterior->palabra);
            //aux2->palabra = aux2->anterior->palabra;
            aux2 = aux2->anterior;//s
        }
        aux2->frec = f;
        strcpy(aux2->palabra,p);
        //aux2->palabra = p;
        aux = aux->siguiente;
    }
    return listaA;
}

#endif
