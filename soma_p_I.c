#include <stdio.h>

int main(){

    int numero, numero2, soma, digito;

    printf("seja bem vindo ao meu jogo");

    scanf("%d", &numero);

    if(numero % 2 == 0){
        printf("%d eh par\n", numero);
    }else{
        printf("%d eh impar\n", numero);
    }

    numero2 = numero;

    soma = 0;

    while (numero2 > 0){
        digito =  numero2 % 10;
        soma = soma + digito;
        numero2 = numero2 / 10;
    }

    printf("A soma dos algorismos de %d eh %d\n", numero, soma);

    return 0;
}