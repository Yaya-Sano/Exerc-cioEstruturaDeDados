#include <stdio.h>

int negativos(int n, float* vet){
    int cont = 0;
    for (int i = 0; i < n; i++){
        if (vet[i] < 0){
            cont++;
        }

    }
    return cont;
}

int main(){
    int numero = 5;
    float vetores[] = {-1,2,-3,4,-5};
    int resultado = negativos(numero,vetores);
    printf("Quantidade de números negativos: %d",resultado);
    return 0;
}