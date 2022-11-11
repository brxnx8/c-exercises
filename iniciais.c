#include <stdio.h>
#include <stdlib.h>

void iniciais(char* a);

int main(){
    char* name = (char *) malloc(101*sizeof(char));
    if (name==NULL){
        printf("nao ha memoria suficiente");
        exit(1);
    }
    printf("digite o nome completo (ate 100 caracteres): ");
    scanf("%100[^\n]", name);
    iniciais(name);
    free(name);
}
void iniciais(char* a){
    printf("%c.", a[0]);
    for(int i=0; a[i]!= '\0';i++){
        if (a[i]==' ' && !(a[i+3]==' '||a[i+2]==' ')){
            printf("%c.", a[i+1]);
        }

    }
}
