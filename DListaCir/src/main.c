#include <stdio.h>
#include "dlistacir.h"

int menu();

int main()
{
	int  op = 0;
	DLISTACIR *l;
	int info;
	do{
		op = menu();
		switch (op)
		{
		case 1:
			l = crear_lista();
			break;
		case 2:
			printf("Ingresa el dato a insertar en la lista\n");
			scanf("%d", &info);
			agregar(l, info);
			imprimir(l);
			break;
		case 3:
			imprimir(l);
			break;
		case 4:
			borrar_lista(l);
			break;
		case 5:
			break;		
		default:
			break;
		}
	}while(op!=5);

	return (0);
}

int menu(){
	int opcion;
	printf("Selecciona una opción\n");
	printf("1. Crear Lista\n");
	printf("2. Insertar\n");
	printf("3. Imprimir\n");
	printf("4. Vaciar\n");
	printf("5. Salir\n");
	scanf("%d", &opcion);
	return opcion;
} 