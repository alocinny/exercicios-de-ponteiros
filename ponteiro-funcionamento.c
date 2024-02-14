#include <stdio.h>
#include <stdlib.h>

int analise1(){
    int *p1,*p2, i, j;
    i=1;
    p1=&i;
    p2=p1;
    i=3;
    j=4;
    p1=&j;
    printf("*p1=%d, *p2=%d, i=%d, j=%d\n", *p1, *p2, i, j); //retorna *p1=4, *p2=3, i=3, j=4
    printf("p1=%d, p2=%d, &i=%d, &j=%d\n", p1, p2, &i, &j); //retorna p1=6422288, p2=6422292, &i=6422292, &j=6422288
}
///////////////////////////////////////////////////
int altera2(int *px, int *py){
    *px = 3; // o endereço para qual o ponteiro aponta receberá o valor 3
    *py = 5; // o endereço para qual o ponteiro aponta receberá o valor 5

}

int analise2(){
    int x, y;
    x=0;
    y=0;
    altera2(&x,&y); 
    printf("1 eh %d, 2 eh %d.",x,y); // retorna 1 eh 3, 2 eh 5.
}
///////////////////////////////////////////////////
/*  
    • Escreva um programa que aplica a função exponencial_2 a
    uma variável inteira e imprime o resultado da aplicação.
    • A função exponencial_2 deve ser do tipo void e eleva um
    número ao quadrado
    • O resultado deve ser armazenado na própria variável inteira
    passada como parâmetro para exponencial_2
*/


void exponencial_2(int *px, int valor){
    *px = valor * valor;
}
int exercicio(){
    int valor;
    int resultado;
    printf("\ndigite um numero: ");
    scanf("%d", &valor);

    exponencial_2(&resultado, valor);

    printf("resultado: %d", resultado);
}


///////////////////////////////////////////////////

int aritmetica(){
    int x=5, y=6;
    int *px, *py;
    px = &x;
    py = &y;
    if (px<py) {printf("\npy-px = %u\n",py-px);}
    else {printf("px-py = %u\n",px-py);}

    printf("px = %u, *px = %d, &px = %u\n", px, *px, &px);
    printf("py = %u, *py = %d, &py = %u\n", py, *py, &py);
    py++;
    printf("py = %u, *py = %d, &py = %u\n", py, *py, &py);
    py=px+3;
    printf("py = %u, *py = %d, &py = %u\n", py, *py, &py);
    printf("py-px = %u\n",py-px);
}

///////////////////////////////////////////////////
int size(){
    int num[ ]={1,2,3};
    printf ("Tamanho = %d\n", sizeof(num));
    printf ("Numero de elementos = %d\n", sizeof(num)/sizeof(int));
    printf("%d", sizeof(int));
}

///////////////////////////////////////////////////

int exercicio2(){
    float notas[40], soma=0;
    int cont=0;
    do {
        printf("Digite a nota do aluno %d: ", cont);
        scanf("%f", notas+cont);
        if(*(notas+cont) > -1)
        soma += *(notas+cont);
    } while(*(notas+cont++) >= 0);
    printf("Média das notas: %.2f", soma/(cont-1));

}

///////////////////////////////////////////////////


int main(){
    //analise1();

    //printf("\n");
    
    //analise2();
    
    //printf("\n");
    
    //exercicio();
    
    //printf("\n");

    //aritmetica();

    //printf("\n");

    //size();

    //printf("\n");

    exercicio2();


}

