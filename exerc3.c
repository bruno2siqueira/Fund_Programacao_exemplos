// Um código está correto se for maior que 119, ou menor e igual a 46. 
// Escrever um programa em C que teste este valor e some 1 no código se ele estiver errado.

#include <stdio.h>
#include <math.h>
 
int main(){
    int cod;
    scanf("%d",&cod); // obtendo o erro

    if (cod > 119){
        printf("CODIGO CORRETO\n");
    }
    else if (cod <= 46){
        printf("CODIGO CORRETO\n");
    }else{
        cod++; // adicionando 1 ao Codigo
        printf("CODIGO ERRADO, novo valor: %d\n", cod);
    }
    
    return 0;
}
