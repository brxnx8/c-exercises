#include <stdio.h>

int compara(char* w1, char* w2);

int main()
{
    char* word1;
    char* word2;
    word1 = (char*) malloc (80);
    word2 = (char*) malloc (80);

    printf("Digite uma palvra de ate 80 carcteres: ");
    scanf("%s", word1);
    fflush(stdin);
    printf("Digite outra palvra de ate 80 carcteres: ");
    scanf("%s", word2);

    compara(word1, word2);

    free(word1);
    free(word2);

}

int compara(char* w1, char* w2)
{
    int i;
    for (i = 0; w1[i] != '\0' && w2[i] != '\0'; i++)
        {
           if(w1[i]!=w2[i])
            {
                printf("palavras diferentes");
                return 1;

            }
        }
    if (w1[i]=='\0' && w2[i]!='\0')
    {
        printf("palavra 1 eh substring da 2");
    }
    else
    {
        if(w2[i]=='\0' && w1[i]!='\0')
        {
            printf("palavra 2 eh substring da 1");
        }
        else
        {
            printf("palavras iguais");
        }
    }

}
