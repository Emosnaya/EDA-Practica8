#include "dlista.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * @brief Funcion que crea la lista
 * 
 * @return DLISTA* 
 */
DLISTA *crear_lista(){
    DLISTA *l = (DLISTA*)malloc(sizeof(DLISTA));
    l->lon = 0;
    l->head = l->tail = NULL;
    return l;
}

/**
 * @brief Funcion que borra una lista
 * 
 * @param l Lista a borrar 
 * @return DLISTA* una lista nula
 */
DLISTA *borrar_lista(DLISTA *l){
    if (l!=NULL)
    {
        free(l);
        return NULL;
    }
}

/**
 * @brief Funcion que busca en la lista
 * 
 * @param l Lista
 * @param dato dato a buscar
 * @return DLISTA* Lista
 */
DNODO *buscar(DLISTA *l , int dato){
    for (DNODO *tmp = l->head; tmp != NULL ; tmp =  tmp->sig)
    {
        if (tmp->dato == dato)
        {
            return tmp;
        }
    }
    return NULL;
    
}

/**
 * @brief Funcion que agrega elementos a la lista
 * 
 * @param l Lista
 * @param dato dato del nodo
 * @return true si pudo agregar
 * @return false si no pudo agregar
 */
bool agregar(DLISTA *l, int dato){
    DNODO *nuevo = crear_nodo(dato);
    if (l->lon == 0 && l->head == l->tail){
        nuevo->sig = l->head;
        nuevo->ant = NULL;
        l->head = l->tail = nuevo;
        l->lon++;
        return true;
    } else{
        nuevo->sig = l->head;
        l->head = nuevo;
        l->lon++;
    }
}

/**
 * @brief Funcion que imprime la lista
 * 
 * @param l Lista a imprimir 
 */
void imprimir(DLISTA *l){
    printf("[ ");
    for(DNODO *tmp=l->head; tmp!=NULL; tmp =tmp->sig){
        printf("%d ", tmp->dato);
    }
    printf("]\n");
}