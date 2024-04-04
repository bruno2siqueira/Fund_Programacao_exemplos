#include <stdio.h>

int main()
{
    int num1, num2, num3;

    // Entrada dos três números inteiros
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);

    // Ordenação dos números
    int temp;
    if (num1 > num2)
    {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    if (num2 > num3)
    {
        temp = num2;
        num2 = num3;
        num3 = temp;
    }
    if (num1 > num2)
    {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }

    // Exibição dos números ordenados
    printf("Numeros em ordem crescente: %d, %d, %d\n", num1, num2, num3);

    return 0;
}
