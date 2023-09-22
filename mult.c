#include <stdio.h>

int main(){

    int n1, n2;
    printf("seja bem vindo ao meu jogo");

    scanf("%d", &n1);
    scanf("%d", &n2);

    if(n2 > n1){
        printf("%d eh maior que %d\n", n2, n1);
        if(n2 % n1 == 0){
                printf("%d eh multiplo de %d\n", n2, n1);
                    }else{
                        printf("%d nao eh multiplo de %d\n", n2, n1);
                        }
        }else if(n1 > n2){
            printf("%d eh maior que %d\n", n1, n2);
                if(n1 % n2 == 0){
                    printf("%d eh multiplo de %d\n", n1, n2);
                        }else{
                            printf("%d nao eh multiplo de %d\n", n1, n2);
                        }
        }else{
            printf("Os valores lidos sao iguais\n");
        }

    return 0;
}