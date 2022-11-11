#include <stdio.h>

void inverte(char* word, char* inversa);

int main()
{
    char inv[21];
    char palvra[21];


    printf("Digite algo(max 20 caracteres): ");
    scanf("%20[^\n]", palvra);

    inverte(palvra, inv);
    printf("%s", inv);

}

void inverte(char* word, char* inversa)
{
    int i = 0;
    while(word[i]!='\0')
    {
        i++;
    }
    int k = 0;
    for(; i>=0; k++)
    {
        i--;
        inversa[k]=word[i];


    }
    inversa[k-1]='\0';

}
