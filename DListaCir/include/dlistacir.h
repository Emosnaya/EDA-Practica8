#ifndef __DLISTACIR_H__
#define __DLISTACIR_H__
#include <stdbool.h>
#include "dnodo.h"

typedef struct DLISTACIR
{
    DNODO *head;
    DNODO *tail;
    int lon;
} DLISTACIR;

DLISTACIR *crear_lista();
DLISTACIR *borrar_lista(DLISTACIR*);
DNODO *buscar(DLISTACIR*, int);
bool agregar(DLISTACIR*, int);
void imprimir(DLISTACIR*);



#endif