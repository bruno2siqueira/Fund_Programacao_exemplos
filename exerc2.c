// 1) Refaça o programa para calcular as raizes de uma equação do segundo grau através da fórmula de Báscara, dando respostas diferentes para os casos: delta menor que zero, igual ao zero ou maior que zero.

#include <stdio.h>
#include <math.h>
 
int main(){
    int a, b, c;
    int delta1, delta2;
    // ax2 + bx + c = 0; Equacao 2 grau
    scanf("%d", &a); // obtendo valor de a
    scanf("%d", &b); // obtendo valor de b
    scanf("%d", &c); // obtendo valor de c
    delta1 = (-b + sqrt(b*b - 4*a*c))/2*a; // calculando delta1
    printf("Delta1: %d\n", delta1); //mostrando delta1
    delta2 = (-b + sqrt(b*b - 4*a*c))/2*a; // calculando delta2
    printf("Delta2: %d\n", delta2);      // mostrando delta2

    if (delta1 < 0){
        printf("Delta1 é NEGATIVO");
    }
    else if (delta1 > 0){
        printf("Delta1 é POSITIVO");
    }
    else{
        printf("Delta1 é IGUAL A ZERO");
    }
    printf("\n");
    if (delta2 < 0){
        printf("Delta2 é NEGATIVO");
    }
    else if (delta2 > 0){
        printf("Delta2 é POSITIVO");
    }
    else{
        printf("Delta2 é IGUAL A ZERO");
    }
    return 0;
}
