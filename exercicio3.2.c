#include <stdio.h>

int pares(int n, int* vet){
    int cont = 0;
    for (int i = 0; i < n; i++){
        if (vet[i] % 2 == 0){
            cont++;
        }

    }
    return cont;
}

int main(){
    int numero = 5;
    int vetores[] = {-1,2,-2,4,-5};
    int resultado = pares(numero,vetores);
    printf("Quantidade de números pares: %d",resultado);
    return 0;
}