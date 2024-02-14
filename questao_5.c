#include <stdio.h>
#include <stdlib.h>

int troca(int *pa, int *pb){
    int temp;

    temp = *pa;
    *pa = *pb;
    *pb = temp;

    return 0;
}

int main(){
    int a,b;

    printf("digite um numero: ");
    scanf("%d", &a);
    printf("digite outro numero: ");
    scanf("%d", &b);

    if(a>b){
        printf("o valor da a (%d) ja eh maior que o valor de b (%d)", a, b);
    } else {
        if(b>a){
            printf("o valor de a (%d) eh menor que o valor de b (%d)", a, b);

            troca(&a, &b);

            printf("\nagora o valor de a (%d) eh maior que o valor de b (%d)", a , b);

        } else {
            printf("o valor de a eh igual ao valor de b (%d)", a);
        }
    }
}