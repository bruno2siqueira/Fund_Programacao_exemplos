// 1) Fazer um programa para ler um número e 
//imprimir uma mensagem informando se ele é positivo, negativo ou igual a zero.

#include <stdio.h>
 
int main(){

    int n;
    scanf("%d", &n);

    if(n < 0){
        printf("o numero é NEGATIVO");
    }
    else if(n > 0){
        printf("o numero é POSITIVO");
    }
    else{ 
        printf("o numero é IGUAL A ZERO");
    }
    return 0;
}
