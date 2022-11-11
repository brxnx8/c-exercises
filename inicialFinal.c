#include <stdio.h>
#include <stdlib.h>

int main(){
    char* palavra;
    int cont = 0;
    int con = 0;
    printf("digite uma palavra de ate 20 caracteres: ");
    palavra = (char*) malloc(sizeof(char)*21);
    if (palavra==NULL){
        printf("nao deu para alocar memoria suficiente");
        exit(1);
    }
    scanf("%20[^\n]", palavra);
    for(int i =0; palavra[i]!='\0'; i++){
        if (palavra[i] != ' ')
            cont++;
        con++;
    }
    printf("%c %c %d", palavra[0], palavra[con-1], cont);
    free(palavra);
}
