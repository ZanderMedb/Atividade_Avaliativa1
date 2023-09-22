#include <stdio.h>

int main(){

    printf("seja bem vindo ao meu jogo");

    int senha, confirmacao;

    scanf("cadastre sua senha aqui :%d", &senha);
    printf("senha cadastrada: %d\n", senha);

    scanf("digite sua senha:%d", &x);

    while(confirmacao != senha){
        printf("senha invalida!\n");
        scanf("%d", &confirmacao);
    }

    if(confirmacao == senha){
        printf("senha valida!\n");
    }

    return 0;
}