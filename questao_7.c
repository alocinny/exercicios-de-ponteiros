#include <stdio.h>
#include <stdlib.h>

int sum(int *a, int b){
    int *ptB = &b;
    int soma = *a + *ptB;

    *a = soma;

    return 0;
}


int main(){
    int a, b;

    printf("digite um numero: ");
    scanf("%d", &a);
    printf("digite outro numero: ");
    scanf("%d", &b);

    printf("\nvalor de a (%d) e valor de b (%d)", a, b);

    sum(&a,b);

    printf("\nvalor da soma dos valores das variaveis aramzenadas em a (%d) e valor de b permanece (%d)", a, b);
}