#include <stdio.h>

int dentro_ret (int x0, int y0, int userPontox, int userPontoy, int x1, int y1){
    if ((x0 <= userPontox && userPontox <= x1) && (y0 <= userPontoy && userPontoy <= y1)){
        return 1;
    }else{
        return 0;
    }  
}

int main(){
    int x0, y0, x1, y1;
    int userPontox, userPontoy;
    printf("Digite os dois números do vértice inferior do retângulo:\n");
    scanf("%d %d", &x0, &y0);
    printf("Digite os dois números do vértice superior do retângulo:\n");
    scanf("%d %d", &x1, &y1);
    //aq caberia uma validação de entrada pra forçar o usuário a sempre colocar x1 e y2 maiores que x0 e y0
    //pra nao dar error no código
    printf("Vértice inferior: (%d,%d)\nVértice superior: (%d,%d)\n", x0, y0, x1, y1);
    printf("Digite os dois números do ponto a ser observado:\n");
    scanf("%d %d", &userPontox, &userPontoy);
    //printf("(%d,%d)\n", userPontox, userPontoy);
    int resultado = dentro_ret(x0,y0,userPontox,userPontoy,x1,y1);
    printf("Retorno da função: %d\n",resultado);
    if (resultado == 1){
        printf("O ponto (%d,%d) está no retângulo.", userPontox, userPontoy);
    }else{
        printf("O ponto (%d,%d) NÃO está no retângulo.", userPontox, userPontoy);
    }
    return 0;
}