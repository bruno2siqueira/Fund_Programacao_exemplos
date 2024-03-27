#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    float altura, pesoIdeal;
    char sexo;
    printf("Informe sua ALTURA: ");
    scanf("%f", &altura);
    printf("Informe seu SEXO (M ou F): ");
    fflush(stdin); // limpeza do buffer   
    sexo = getchar();
    pesoIdeal = (27.7*altura)-58;
    printf("O sexo __%c__ e o peso ideal desta pessoa em Kg eh __%f__", sexo, pesoIdeal);

    return 0;
}