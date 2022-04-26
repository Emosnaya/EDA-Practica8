#ifndef __DLISTA_H__
#define __DLISTA_H__
#include <stdbool.h>
#include "dnodo.h"

typedef struct DLISTA
{
    DNODO *head;
    DNODO *tail;
    int lon;
} DLISTA;

DLISTA *crear_lista();
DLISTA *borrar_lista(DLISTA*);
DNODO *buscar(DLISTA*, int);
bool agregar(DLISTA*, int);
void imprimir(DLISTA*);



#endif