//
// Created by gabriel on 23/10/2021.
//

#include "Circle.h"
#include "stdlib.h"

#define PI 3.1415

struct circulo {
    Ponto *p;
    float r;
};

Circulo* circulo_cria(float x, float y, float r) {
    Circulo *c = (Circulo*)malloc(sizeof (Circulo));
    c->p = ponto_cria(x,y);
    c->r = r;
    return c;
}

void circulo_free(Circulo *c) {
    ponto_free(c->p);
    free(c);
}

float circulo_area(Circulo* c) {
    return PI*c->r*c->r;
}

int circulo_interior(Circulo* c, Ponto* p) {
    float d = ponto_distancia(c->p, p);
    return(d < c->r);
}
