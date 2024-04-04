// 6) Dados 3 valores X, Y, Z verificar se eles podem ser os comprimentos dos lados de um triângulo e, se forem, verificar se é triângulo equilátero, isósceles ou escaleno.
//Propriedades - o comprimento de cada lado de um triângulo é menor do que a soma dos outros 2 lados Equilátero - 3 lados iguais Isósceles - 2 lados iguais Escaleno - 3 lados diferentes

#include <stdio.h>
#include <math.h>

    int
    main(){
    int x, y, z;
    scanf("%d %d %d",&x, &y, &z); // obtendo o dia da semana

    // Verificação se os valores formam um triângulo
    if (x < y + z && y < x + z && z < x + y)
    {
        printf("Os valores fornecidos formam um triângulo.\n");

        if (x == y && y == z)
        {
            printf("Triângulo Equilátero\n");
        }
        else if (x == y || x == z || y == z)
        {
            printf("Triângulo Isósceles\n");
        }
        else
        {
            printf("Triângulo Escaleno\n");
        }
    }
    else
    {
        printf("Os valores fornecidos NÃO formam um triângulo.\n");
    }

        return 0;
}
