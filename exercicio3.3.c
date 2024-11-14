#include <stdio.h>

void inverte(int n, int* vet){
    int temp;
    for(int i = 0; i < n/2 ; i++){
        temp = vet[i];
        vet[i] = vet[n - 1 - i];
        vet[n - 1 -i] = temp;
    }
}

int main(){
    int vetor[] = {1,2,3,4,5};
    int num = 5;
    inverte(num,vetor);
        printf("Vetor invertido: ");
    for (int i = 0; i < num; i++) {
        printf("%d", vetor[i]);
    }
    printf("\n");

    return 0;
}