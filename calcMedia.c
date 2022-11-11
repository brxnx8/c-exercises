#include <stdio.h>
#include <stdlib.h>

int main(){
    int number = 0;
    printf("Digite o numero de termos para fazer a media: ");
    scanf("%d", &number);
    int *vetor = (int *) malloc(number * sizeof(int));
    printf(" a media entre esses termos eh %d", media(number, vetor));

}
int media(int n, int *v){
    int m = 0;
    for (int i = 1; i <= n; i++){
        printf("digite um valor para a posicao %d: ", i);
        scanf("%d", &v[i]);
        m += v[i];

    }
    return m/n;
}
