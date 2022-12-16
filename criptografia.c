#include <stdio.h>
void cripitografa(char* f);
int main()
{
        char frase [81];
        printf("Digite uma frase para ser criptografada (max 80 carcteres): ");
        scanf("%80[^\n]", frase);
        frase[80]='\0';
        cripitografa(frase);
}
void cripitografa(char* f)
 {

    int i=0;
    int cont=0;
    while(f[i]!='\0')
    {
        if(f[i]!=' ')
        {
            cont++;
        }
        if (f[i]>=97 && f[i]<=122)
        {
            f[i]-=32;
        }
        i++;
    }
    char* fr;
    int espacos = 1;
    fr = (char *)malloc(cont);
    int d=0;
    int g = 0;
    for (int c = 0; f[c]!='\0'; c++)
    {
        if(f[c]==' ')
            {
                continue;
            }
         if(espacos>5)
        {
            espacos=1;
        }

        if(espacos<6)
        {
            fr[d]=f[c];
            fr[d]+=espacos;
            if(fr[d]>90)
            {
                g = fr[d] - 90;
                fr[d]=64+g;
            }
            espacos++;
            d++;

        }



    }
    fr[d]='\0';
    printf("%s", fr);
    free(fr);


 }
