//
// Created by gabriel on 23/10/2021.
//
#include "point.h"
//Struct do Ponto

typedef struct ponto {
    float x;
    float y;
} Ponto;

//Protótipo das funções

Ponto* ponto_cria(float x, float y);
void ponto_free(Ponto *p);
void ponto_acessa();
void ponto_atribui();
float ponto_distancia(Ponto *p1, Ponto *p2);

// Implementação

Ponto* ponto_cria(float x, float y) {
    Ponto* p = (Ponto*) malloc(sizeof(Ponto));
    if(p == NULL) {
        printf("Memória insuficiente");
        exit(1);
    }
    p->x = x;
    p->y = y;
}

void ponto_free(Ponto *p) {
    free(p);
}

float ponto_distancia(Ponto *p1, Ponto *p2) {
    float dx = p2->x - p1->x;
    float dy = p2->y - p2->x;
    return sqrt(dx*dx + dy*dy);
}

void ponto_acessa(Ponto *p, float *x, float *y) {
    *x = p->x;
    *y = p->y;
}

void ponto_atribui(Ponto *p, float x, float y) {
    p->x = x;
    p->y = y;
}
