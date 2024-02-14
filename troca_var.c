#include <stdio.h>
#include <stdlib.h>

void troca(int *p, int *q){
    int temp;
    temp = *p; // recebendo o valor para o qual o ponteiro p aponta
    *p = *q; //endereço de memoria para o qual o ponteiro p aponta vai receber o valor para o qual o ponteiro q aponta
    *q = temp; // endereço de memoria para o qual o ponteiro q aponta vai receber o valor de temp
}

int main(){
    int a = 13; int b = 12;
    troca(&a,&b);
    printf("novo valor a: %d\nnovo valor b: %d", a, b);
}