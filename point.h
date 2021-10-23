//
// Created by gabriel on 23/10/2021.
//

#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

//Struct do Ponto

typedef struct ponto Ponto;

//Protótipo das funções

//Função que cria o ponto com as coordenadas
Ponto* ponto_cria(float x, float y);
//Função que libera a memória usada pelo ponto
void ponto_free(Ponto *p);
//Função que acessa um ponto
void ponto_acessa(Ponto *p, float *x, float *y);
//Função que atribui valores de x e y de um ponto existente
void ponto_atribui(Ponto *p, float x, float y);
float ponto_distancia(Ponto *p1, Ponto *p2);
