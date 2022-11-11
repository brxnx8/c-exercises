#include <stdio.h>
#include <stdlib.h>

int main(){
    int vezes = 0;
    char caractere;
    char palavra[21];
    printf("digite uma palavra de ate 20 caracteres: ");
    scanf("%s", &palavra);
    fflush(stdin);
    printf("digite 1 caractere: ");
    scanf("%c", &caractere);
    for(int i=0; i<21; i++){
        if(palavra[i] == caractere){
            vezes++;
            }

    }
    printf("o caractere %c aparece %d vezes", caractere, vezes);

}
