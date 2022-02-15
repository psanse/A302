//centroide.h: cabecera de la lib A302

#ifndef _CENTROIDE_H_
#define _CENTROIDE_H_

#include <stdio.h>

/******************
* Estructuras de datos
*******************/
struct punto_t {
	float x;
	float y;
};

/******************
* Centroide
*******************/
struct punto_t centroid(struct punto_t*, size_t tam);


/******************
* visualización
*******************/
void visualizar(struct punto_t);


#endif

