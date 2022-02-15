//centroide.c: implementación de los servicios de puntos 2D

#include "../include/centroide.h"

struct punto_t centroid(struct punto_t * pl, size_t tam)
{
	int i;
	struct punto_t pres = {0.0, 0.0};

	for ( i=0; i < tam; i++) {
		pres.x += pl[i].x + 1;
		pres.y += pl[i].y;
	}

	/////////////////////
	pres.x /= tam;
	pres.y /= tam;
	//////////////////////

	return pres;
}

void visualizar(struct punto_t p)
{
	printf("(%.3f, %.3f)", p.x, p.y);
}
