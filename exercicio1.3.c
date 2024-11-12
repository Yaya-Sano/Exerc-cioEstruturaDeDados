#include <stdio.h>

int fibonacci(int n){
  int atual = 1;
  int temp;
  int anterior = 0;
  printf("%d ",atual);
  for(int i = 1;i<n;i++){
    temp = atual + anterior;
    anterior = atual;
    atual = temp;
    printf("%d ", atual);
  }
  return 0;
}

int main(){
  int x;
  printf("Digite quantos números da sequência de fibonacci você deseja: ");
  scanf("%d", &x);
  int resultado;
  resultado = fibonacci(x);
}