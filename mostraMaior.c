#include <stdio.h>

int main(){
    int number[3], maior, menor, pares;
    float media;
    printf("Digite um numero: ");
    scanf("%d", &number[0]);
    maior = number[0];
    menor = number[0];
    media = number[0];
    if (number[0]%2 ==0){
        pares = 1;
    }
    for(int c = 1; c < 3; c++){
        printf("Digite outro numero: ");
        scanf("%d", &number[c]);
        if (number[c] > maior){
            maior = number[c];
        }
        if(number[c] < menor){
            menor = number[c];
        }
        if (number[c]%2 ==0){
        pares++;
    }
        media += number[c];

    }
    media /= 3;
    printf(" %d foi o maior\n %d foi o menor\n %.2f a media\n %d numero(s) pare(s).", maior, menor, media, pares);
}
