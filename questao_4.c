#include <stdio.h>
#include <stdlib.h>

int troca(int *p1, int *p2){
    int temp;

    temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    return 0;
}

int main(){
    int a, b;
    printf("\ndigite um numero: ");
    scanf("%d", &a);
    printf("\ndigite outro numero: ");
    scanf("%d", &b);

    printf("\nvalor antigo de a: %d", a);
    printf("\nvalor antigo de b: %d", b);

    troca(&a,&b);
    
    printf("\nvalor novo de a: %d", a);
    printf("\nvalor novo de b: %d", b);
}