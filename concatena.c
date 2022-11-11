#include <stdio.h>

void concatena(char* n, char* nb, char* ad, char* p);

int main()
{
    char pessoa[113];
    char name[51];
    char endereco[51];
    char numero[12];

    printf("Digite seu nome(max 50 caracteres): ");
    scanf("%50[^\n]", name);
    fflush(stdin);
    printf("Digite seu endereco(max 50 caracteres): ");
    scanf("%50[^\n]", endereco);
    fflush(stdin);
    printf("Digite seu numero(max 11 caracteres): ");
    scanf("%11[^\n]", numero);

    concatena(name, numero, endereco, pessoa);
    printf("%s", pessoa);

}

void concatena(char* n, char* nb, char* ad, char* p)
{
    int i=0;
    int j=0;
    int k=0;
    for ( ; n[i] != '\0'; i++)
    {
          p[i] = n[i];
    }
    p[i] = ';';
    for ( ; nb[k] != '\0'; k++)
    {
         i++;
         p[i] = nb[k];

    }
    i++;
    p[i] = ';';
    for ( ; ad[j] != '\0'; j++)
    {
         i++;
         p[i] = ad[j];

    }
    i++;
    p[i] = '\0';
}
