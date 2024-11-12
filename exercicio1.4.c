#include <stdio.h>

int soma_impares(int n){
    int resultadoSoma = 0;
    for(int i = 0; i <= n; i++){
        if (i % 2 == 1){
            resultadoSoma = resultadoSoma + i;
        }
    }
    return resultadoSoma;
}

int main(){
    int x = 0;
    printf("Soma de ímpares de 0 até: ");
    scanf("%d", &x);
    int resultado = 0;
    resultado = soma_impares(x);
    printf("%d", resultado);
}