#include <stdio.h>
#include <stdlib.h>

float max_vet(int n, float *v);

int main(){
    int qntd = 0;
    printf("digite  a quantidade de posicoes no vetor: ");
    scanf("%d", &qntd);
    float *vetor;
    vetor = (float *) malloc(qntd * sizeof(float));
    if (vetor==NULL){
        printf("Memoria insuficiente.\n");
        exit(1);
    }else{
    for (int i = 0; i <= qntd-1; i++){
        printf("digite um valor para a posicao %d: ", i);
        scanf("%f", &vetor[i]);
    }
    printf("o maior valor do vetor eh %f.", max_vet(qntd,vetor));
    free(vetor);
    }
}
float max_vet(int n, float *v){
    float maior = v[0];
    for (int c = 1; c <= n; c++){
        if(v[c] > maior){
            maior = v[c];
        }
    }
    return maior;
}
