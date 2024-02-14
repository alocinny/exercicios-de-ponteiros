//Crie um programa que contenha um array de float contendo 10 elementos. Imprima o endereco de cada posicao desse array

#include <stdio.h>
#include <stdlib.h>

int main(){
    float vetor[10] = {1.0, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.0};
    float *pointer = &vetor[0];

    for(int i=0; i<10; i++){
        pointer++;
        printf("\nendereco da posicao %d do array: %p", i, (void*)pointer);

    }
}