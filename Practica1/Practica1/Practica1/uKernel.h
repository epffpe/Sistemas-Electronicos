#include "stdafx.h"
#include <iostream>


//*********************************************************************************
//	Estructuras y Proceso nulo
//*********************************************************************************
//
//  Estructura del BCP
//  ------------------
//	Puntero a la pila de la tarea
//	Siguiente BCP en Retardados
//	Anterior BCP en retardados
//	Siguiente BCP en Preparados
//	Siguiente en lista de todos los BCP
//	Retardo
//	Prioridad
//	Estado
//	Mensaje
//	Nombre


typedef struct bcp {
	unsigned char *pila;
	struct bcp *prox;
	struct bcp *ant;
	struct bcp *hebra;
	struct bcp *todos;
	unsigned int retardo;
	unsigned char prioridad;
	unsigned char estado;
	void *mensaje;
	char nombre[10];
} BCP;

//
//  Estructura del Mensaje
//  ----------------------
//	Puntero a la lista de Mensajes
//	Puntero al cuerpo del mensaje
typedef struct mensaje {

} MENSAJE;
	
//
//  Estructura del Buzon
//  --------------------
//	Puntero al primer mensaje
//	Puntero al ultimo mensaje
//	Puntero al primer proceso
//	Puntero al ultimo Proceso
//	Puntero a la lista de buzones libres
//	
typedef struct buzon {
	mensaje *primermsg;
} BUZON;



//*********************************************************************************
//	Funciones de uKConsola
//*********************************************************************************

void menu();