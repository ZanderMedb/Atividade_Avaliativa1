#include <stdio.h>

int main(){

    char nivel;
    float salario, salarioTotal;

    printf("seja bem vindo ao meu jogo");

    scanf("Voce e funcionario de qual nivel ? (a,b,c) %c", &nivel);
    scanf("informe seu salario :%f", &salario);


    if(nivel == 'a'){
        salarioTotal = salario + (0.05 * salario);
    }else if(nivel == 'b'){
        salarioTotal = salario + (0.07 * salario);
    }else{
        salarioTotal = salario + (0.08 * salario);
    }

    printf("R$ %0.2f", salarioTotal);

    return 0;
}