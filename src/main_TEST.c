//main_TEST.c: TESTS de la librería matemática A302

#include <stdio.h>
#include "../include/centroide.h"

#define MAX_SIZE_LISTA 3


/*************
* TESTS UNITARIOS DEL CENTROIDE
**************/
int TEST_CENTROIDE_UNO() {
	int i;
	struct punto_t pcentroide;
	struct punto_t lista[MAX_SIZE_LISTA];
	for (i = 0; i < MAX_SIZE_LISTA; i++) {
		lista[i].x = i;
		lista[i].y = i + 1;
	}
	
	//////////////////////////////////////////////////
	pcentroide = centroid(lista, MAX_SIZE_LISTA);
	//////////////////////////////////////////////////

	//TEST
	if (pcentroide.x != 1.0 || pcentroide.y != 2.0) {
		//ADD CODE imprimir mensaje de error
		return -1;
	}

	//I/O
	//visualizar(pcentroide);

	return 0;		//TEST OK
}


int main() {
		int status;

		for () {

		}
	status=TEST_CENTROIDE_UNO();
		if (status == -1) {
			perror("TEST_CENTROIDE_UNO()- FAIL");
		}



	return 0;
}