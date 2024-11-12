#include <stdio.h>

int primo(int n){
    int div = 0;
    for(int i=2;i<n;i++){ //uma forma de otimizar seria calcular até a raiz quadrada de n
        if(n%i == 0){     //pq a raiz ja seria um divisor. enfim deixaria mais otimizado
            div++;
        }
    }
    if(div == 0){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int x;
    printf("Este número é primo?\nDigite o número: ");
    scanf("%d", &x);
    int resultado = primo(x);
    printf("Valor de retorno: %d\n", resultado);
    if(resultado == 1){
        printf("O número %d é primo.", x);
    }else{
        printf("O número %d NÃO é primo.", x);
    }
}