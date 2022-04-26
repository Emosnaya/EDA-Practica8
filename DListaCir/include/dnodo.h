#ifndef __DNODO_H__
#define __DNODO_H__
#include <stdbool.h>

typedef struct DNODO
{
    int dato;
    struct DNODO *sig;
    struct DNODO *ant;
}DNODO;

DNODO *crear_nodo(int);
DNODO *borrar_nodo(DNODO*);
bool actualizar_nodo(DNODO*, int);



#endif