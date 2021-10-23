//
// Created by gabriel on 23/10/2021.
//

#include "point.h"

typedef struct circulo Circulo;

Circulo* circulo_cria(float x, float y, float r);
void circulo_free(Circulo *c);
float circulo_area(Circulo* c);
int circulo_interior(Circulo* c, Ponto* p);