#include <stdio.h>
#include <stdlib.h>

int maiores(int n, int *v, int valor);

int main(){
    int qntd = 0;
    int valor = 0;
    printf("Digite a quantidade posicoes do vetor: ");
    scanf("%d", &qntd);
    printf("Digite um valor para comparacao: ");
    scanf("%d", &valor);
    int *vetor;
    vetor = (int *) malloc(qntd * sizeof(int));
    if (vetor==NULL){
        printf("memoria insuficiente");
        exit(1);
    }else{
        for (int i = 0; i <= qntd-1; i++){
            printf("digite um valor para a posicao %d: ", i);
            scanf("%d", &vetor[i]);
        }
        printf("Ha %d valore(s) maior que %d", maiores(qntd, vetor, valor), valor);
    }

}
int maiores(int n, int *v, int valor){
    int numeros = 0;
    for (int i = 0; i <= n-1; i++){
        if (v[i] > valor){
            numeros++;
        }
    }
    return numeros;
}
