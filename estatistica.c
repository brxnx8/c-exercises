#include <stdio.h>

void calcula(char* word);

int main()
{
    char phrase[51];


    printf("Digite algo(max 50 caracteres): ");
    scanf("%50[^\n]", phrase);

    calcula(phrase);

}

void calcula(char* word)
{
    int c = 0;
    for (int i = 0; word[i] != '\0'; i++)
    {
        c=1;
        for(int j = i+1; word[j] != '\0'; j++)
        {
            if(word[i]==word[j])
            {
                c++;
                word[j]=1;
            }
        }
        if(word[i]!=1)
        {
            printf("\'%c\' = %d, ", word[i], c);
        }

    }

}
