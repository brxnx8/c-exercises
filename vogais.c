#include <stdio.h>
#include <stdlib.h>
void vogais(char* s, int* n){
    for (int i=0; s[i] != '\0'; i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
            *n=*n + 1;
        }
    }
}
void lower(char* s){
    for (int i=0; s[i] != '\0'; i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i] += 32;
        }
    }
}
int main (){
    int resposta = 0;
    char string[11];
    printf("digite uma palvra de ate 10 carecteres: ");
    scanf("%s", &string);
    lower(string);
    vogais(string, &resposta);
    printf("a quantidade de vogais nesta palavra e %d", resposta);


}
