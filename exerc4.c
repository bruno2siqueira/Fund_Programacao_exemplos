// Ler um número de 1 a 7 indicando o dia da semana.O programa deve imprimir o dia em extenso e uma mensagem dizendo se é dia útil ou final de semana. Por exemplo, se for digitado 1, o programa imprime: Domingo - final de semana. Se for digitado 2, o programa imprime: Segunda - dia útil e assim por diante.

#include <stdio.h>
#include <math.h>
 
int main(){
    int dia;
    printf("Digite um num de 1 a 7\n");

    scanf("%d",&dia); // obtendo o dia da semana

    if (dia == 1){
        printf("DOMINGO, Final de Semana, Churras!!!\n");
    }
    else if (dia == 7){
        printf("SABADO, Final de Semana, NETFLIX!!!\n");
    }else if(dia > 1 && dia < 7){
        printf("DIA DE SEMANA, Vai Trabalhar!!!\n");
    }else{
        printf("DIA INVÁLIDO!!!\n");
    }
    
    return 0;
}
