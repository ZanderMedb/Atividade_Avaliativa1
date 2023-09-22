#include <stdio.h>


int main(){

    int data;

    printf("seja bem vindo ao meu jogo");

    scanf("%d", &data);

    if(data % 2 != 0){
        printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d.", data);
    }else if((data - 1896) % 4 == 0){
        printf("Os jogos Olimpicos de Verao ocorreram no ano de %d.", data);
    }else if(data < 1896){
        printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d.", data);
    }else if((data - 1930) % 4 == 0){
        printf("A Copa do Mundo de Futebol ocorreu no ano de %d.", data);
    }else {
        printf("Não há informações disponíveis para o ano de %d.\n", data);
    }

    return 0;
}