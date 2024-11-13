#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int calc_esfera(float r, float* area, float* volume){
    *area = 4*(pow(r,2));
    *volume = 4*(pow(r,3))/3;
    return 0;
}

int main(){
    float *area = malloc(sizeof(float));
    float *volume = malloc(sizeof(float));
    if (area == NULL || volume == NULL) {
        printf("Erro de alocação de memória.\n");
        exit(1);
    }
    float raio = 0;
    printf("Digite o tamanho do raio: ");
    scanf("%f",&raio);
    calc_esfera(raio, area, volume);
    printf("Área da superfície: %f\n",*area);
    printf("Volume da esfera: %f\n",*volume);
    free(area);
    free(volume);

}