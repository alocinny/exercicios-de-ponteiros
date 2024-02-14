#include <stdio.h>
#include <stdlib.h>

int sum(int *ptA, int *ptB){
    *ptA *= 2;
    *ptB *= 2;

    return *ptA + *ptB;
}


int main(){
    int a, b;
    printf("digite um numero: ");
    scanf("%d", &a);
    printf("digite outro numero:");
    scanf("%d", &b);

    printf("valores antigos de a (%d) e b (%d)", a, b);

    int resposta = sum(&a, &b);

    printf("\nvalores novos de a (%d) e b (%d)", a, b);
    printf("\n\nsoma do dobro dos valores de cada variavel: %d", resposta);
}