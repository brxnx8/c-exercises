#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sorteia(void){
    srand(time(NULL));
    int x = (rand()%25);
    x = x+97;
    return x;
}
int main(){
    int letra;
    printf("digite uma letra: \n");
    int comp = sorteia();
    scanf("%c", &letra);
    fflush(stdin);
    while(letra != comp)
    {

            if(letra > comp){
                printf("letra mais abaixo no alfabeto\n");
            }
            else{
                    printf("letra mais acima no alfabeto\n");
            }
            scanf("%c", &letra);
            fflush(stdin);
    }
    printf("parabens letra certa");

}
