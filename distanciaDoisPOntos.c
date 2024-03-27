#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int x1, x2, y1, y2;
    float distance;
    printf("Informe as coordenadas do Ponto P: ");
    scanf("%d %d", &x1, &y1);
    printf("Informe as coordenadas do Ponto Q: ");
    scanf("%d %d", &x2, &y2);
    distance = sqrt(pow((x2 - x1),2) + pow((y2 - y1),2));

    printf("Distância entre P e Q é: %f", distance);

    return 0;
}