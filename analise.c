#include <stdio.h>
#include <stdio.h>

int exemplo_1 () {
    int a = 2; int b = 3; int c;
    int *p; //ponteiro do tipo int
    int *q; //outro ponteiro do tipo int
    p = &a; //ponteiro p aponta para a
    q = &b; //ponteiro q aponta para b
    c = *p + *q;

    printf("exemplo  1 : %d", c);
}

int exemplo_2(){
    int a = 2; int b = 3; int c;
    int *p;
    int **r; //ponteiro para ponteiro inteiro
    p = &a;
    r = &p; // r aponta para p e *r aponta para a
    c = **r + b;

    printf("exemplo 2: %d", c);
}

int main(void){
    exemplo_1();
    printf("\n");
    exemplo_2();
}