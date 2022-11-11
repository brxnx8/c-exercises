#include <stdio.h>
#include <stdlib.h>

void pesquisa(float n);

int main(){
    float pessoas;
    printf("Quantas pessoas responderao a pesquisa? ");
    scanf("%f", &pessoas);
    pesquisa(pessoas);
}
void pesquisa(float n){
    int idade = 0;
    int opiniao = 0;
    int otimo = 0;
    int pessimo = 0;
    float ruim = 0;
    float subtracao = 0;
    int bom = 0;
    int regular = 0;
    int maioroti = 0;
    int maioruim = 0;
    float mediaruim = 0;
    int maiorpes = 0;
    for (int i=1; i <= n; i++){

        do{
            system("cls");
            printf("===================================================\n");
            printf("Pesquisa de satisfacao: O que achou do filme?(%d)\n", i);
            printf("===================================================\n");
            printf("[1] Otimo\n[2] Bom\n[3] Regular\n[4] Ruim\n[5] Pessimo\n");
            scanf("%d", &opiniao);
            fflush(stdin);
        }while(!(opiniao > 0 && opiniao < 6));

        printf("Digite tambem sua idade: ");
        scanf("%d", &idade);
        fflush(stdin);
        switch (opiniao){
            case 1: otimo++; if (idade > maioroti){maioroti = idade;} break;
            case 2: bom++; break;
            case 3: regular++; break;
            case 4: ruim++; mediaruim += idade; if (idade > maioruim){maioruim = idade;} break;
            case 5: pessimo++; if (idade > maiorpes){maiorpes = idade;} break;
        }
        printf("\nObrigado pela resposta!\n");
        system("cls");
    }
        subtracao = (bom > regular) ? bom-regular : regular-bom;
        printf("%d foi o total de otimos\n", otimo);
        printf("%.2f%% foi o percentual de diferenca entre bom e regular\n", subtracao/n * 100 );
        printf("%.1f foi a media de idade das pessoas que responderam ruim\n", mediaruim = ruim > 0 ? mediaruim/ruim : 0);
        printf("%.2f%% responderam pessimo, cuja maior idade foi %d anos\n", (pessimo/n) * 100, maiorpes);
        printf("A diferenca de idade entre o mais velho que respondeu otimo e o mais velho que respondeu ruim eh %d", maioroti-maioruim);





}
