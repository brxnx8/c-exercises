#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, sexo, idade, h, mens, wom = 0;
    float v, var = 0;
    printf("Digite a quantidade de pessoas: ");
    scanf("%d", &n);
    int altura[n];
    for (int i = 1; i <= n; i++){
        system("cls");
        printf("Sobre a %d pessoa:\n ", i);
        do{
            printf("[1] Homem\n[2] Mulher\n");
            scanf("%d", &sexo);
            fflush(stdin);
        }while(sexo < 0 || sexo > 2);
        printf("Digite a idade: ");
        scanf("%d", &idade);
        fflush(stdin);
        printf("Digite a altura(cm): ");
        scanf("%d", &h);
        fflush(stdin);
        v += h;
        altura[i-1] = h;
        switch (sexo){
            case 1: if (h > 180){mens++;} break;
            case 2: if (idade >= 20 && idade <= 35){wom++;} break;
        }

    }
        system("cls");
        printf("%d Homens maiores que 1.80\n", mens);
        printf("%d mulheres com idade entre 20 e 35 anos\n", wom);
        v = v/n;
        for (int i = 0; i < n; i++){
            var += (altura[i] - v) * (altura[i] - v);
        }
        printf("a variancia de alturas eh %.2f", var/n);
}
