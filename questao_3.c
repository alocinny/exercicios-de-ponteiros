//a questao 3 eh igual mas com valores de variaveis já definidos 

#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b;

    printf("digite um numero inteiro: ");
    scanf("%d", &a);
    printf("digite outro numero inteiro: ");
    scanf("%d", &b);

    if(&a>&b){
        printf("o endereco de a eh maior que o de b\nendereco de a: %p\nendereco de b: %p", (void *)&a,(void *)&b);
    } else {
        printf("o endereço de b eh maior que o de a\nendereco de a: %p\nendereco de b: %p",(void *)&a,(void *)&b);
    }
}