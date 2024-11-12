#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int raizes(float a, float b, float c, float* x1, float* x2){
    float delta = pow(b,2) - 4 * (a * c);
    if (delta > 0){
        *x1 = (-b + sqrt(delta)) / (2 * a);
        *x2 = (-b - sqrt(delta)) / (2 * a);
    }
    else if (delta == 0){
        *x1 = *x2 = (-b + sqrt(delta)) / 2; 
    }
    else{
        printf("Não possui raízes.\n");
        return 0;
    }
    return (*x1, *x2);
    }
int main(){
    float* x1;
    float* x2;
    x1 = malloc(sizeof(float));
    x2 = malloc(sizeof(float));
    if(x1 == NULL){
    printf("Memória cheia");
    exit(1);
    }
    if(x2 == NULL){
    printf("Memória cheia");
    exit(1);
    }
    raizes(1.0,-10.0,25.0,x1,x2);
    printf("x1 = %p e contém %f\n",x1,*x1);
    printf("x2 = %p e contém %f\n",x2,*x2);
    free(x1);
    free(x2);


    // falta falar quanto tem 1, 2 ou nenhuma raiz
}