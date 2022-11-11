#include <stdio.h>

float calculaMedia(float n1, float n2, float n3);

int main()
{
    float nota[3], media;

    for (int i = 0; i < 3; i++){
        int aux = 1;
        while(aux)
        {
            printf("digite uma nota valida para a prova %d (0 a 10): ", i);
            scanf("%f", &nota[i]);
            fflush(stdin);
            if (nota[i] >= 0 && nota[i] <= 10)
            {
                aux = 0;
            }
        }
    }
    media = calculaMedia(nota[0], nota[1], nota[2]);
    printf("a media e %.2f", media);


}

float calculaMedia(float n1, float n2, float n3)
{
    float soma = n1 + n2 + n3;
    return soma/3;
}
