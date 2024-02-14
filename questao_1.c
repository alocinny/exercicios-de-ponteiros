#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p1; 
    int num = 5;
    float *p2; 
    float real = 3.5;
    char *p3; 
    char carac = 'S';

    p1 = &num;
    p2 = &real;
    p3 = &carac;

    printf("valores antes:\ninteiro: %d\nreal: %4.2f\ncacartere: %c", num, real, carac);

    *p1 = 9;
    *p2 = 7.75;
    *p3 = 'A';

    printf("\nvalores depois:\ninteiro: %d\nreal: %4.2f\ncacartere: %c", num, real, carac);
}

    