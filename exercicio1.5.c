#include <stdio.h>
#include <math.h>
double pi(int n){
    double pi = 0.0;
    double valorSomatoria = 0.0;
    for(int i = 0; i <= n; i ++){
        valorSomatoria = valorSomatoria + (pow(-1,i))/(2 * i +1);
    }
    return 4 * valorSomatoria;
}

int main(){
    int x = 0;
    printf("Digite o número de termos na fórmula de Leibniz: ");
    scanf("%d", &x);
    double resultado = 0;
    resultado = pi(x);
    printf("%.15f", resultado);
}