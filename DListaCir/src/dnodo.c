#include "dnodo.h"
#include <stdlib.h>


/**
 * @brief Funcion que crea un nodo
 * 
 * @param dato dato que lleva el nodo
 * @return DNODO* 
 */
DNODO *crear_nodo(int dato){
    DNODO *nuevo = (DNODO*)malloc(sizeof(DNODO));
    nuevo->ant = NULL;
    nuevo->sig = NULL;
    nuevo->dato = dato;
    return nuevo;
}

/**
 * @brief Funcion que borra el nodo
 * 
 * @param n Nodo a borrar
 * @return DNODO* 
 */
DNODO *borrar_nodo(DNODO *n){
    if(n!=NULL){
        if(n->sig == NULL && n->ant == NULL){
            free(n);
            return NULL;
        }
        return n;
    }
    return NULL;
}
/**
 * @brief Funcion que actualiza el dato de un nodo
 * 
 * @param n Nodo a actualizar
 * @param dato dato nuevo
 * @return true si se pudo actualizar
 * @return false si no se pudo actualizar
 */
bool actualizar_nodo(DNODO *n, int dato){
    if(n!=NULL){
        n->dato = dato;
        return true;
    }
    return false;
}