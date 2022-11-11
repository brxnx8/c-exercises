#include <stdio.h>
#include <conio.h>

int main(){
    char frase[82];
    frase[81]='\0';
    printf("Digite uma frase caracter por caracter (ate 80 caracteres) tecle enter para concluir \n");
    for(int i=0; i<81; i++)
    {
        printf("\ndigite o %d caractere: ", i);
        frase[i]=getch();
        if(frase[i]=='\r'){
            frase[i] = '\0';
            system("cls");
            break;
        }

    }

    for(int i=0; frase[i]!='\0'; i++)
    {
        if(frase[i]==' ')
        {
            printf("\n");
        }
        else{
            printf("%c", frase[i]);
        }
    }

}
