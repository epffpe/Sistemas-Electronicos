#include "stdafx.h"
#include "uKernel.h"
void menu() {
	printf("\n");
	printf("##########################################################\n");
	printf("           Implementacion de un Emulador\n");
	printf("         de MicroKernel sobre Plataforma PC\n");
	printf("               Sistemas Electronicos\n");
	printf("               Eugenio Peñate Fariñas\n");
	printf("                    Curso: 2010-2011\n");
	printf("##########################################################\n");
	printf("                   Menu de comandos\n");
	printf("                   ----------------\n");
	printf("? - Presenta el menu de opciones\n");
	printf("i - Inicializa el sistema emulado\n");
	printf("c - Crea una tarea\n");
	printf("e - Elimina una tarea\n");
	printf("r - Retarda una tarea\n");
	printf("n - Tarea espera por un evento\n");
	printf("v - Genera evento para una tarea\n");
	printf("m - Envia mensaje a tarea\n");
	printf("l - Tarea espera mensaje\n");
	printf("s - Muestra las listas de BCPs\n");
	printf("b - Cambia prioridad de una tarea\n");
	printf("t - Ejecuta TICK del sistema Emulado\n");
}