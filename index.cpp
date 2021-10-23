//
// Created by gabriel on 23/10/2021.
//

#include "point.h"
#include "Circle.h"

int main() {
    Ponto *p1 = ponto_cria(2.0, 2.0);
    Ponto *p2 = ponto_cria(1.1,5.1);
    float d = ponto_distancia(p1, p2);
    printf("%f", d);

    printf("Circulo\n\n");
    Circulo *c1 = circulo_cria(2.0, 1.0,5);
    float a = circulo_area(c1);
    printf("Área do circulo: %2f", a);
    if(circulo_interior(c1, p2)){
        printf("O ponto P2 está dentro do círculo");
    } else {
        printf("O ponto P2 está fora do círculo");
    }
    ponto_free(p1);
    ponto_free(p2);
    circulo_free(c1);
    return 0;
}
