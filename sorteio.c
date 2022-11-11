#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sorteia(void){
    srand(time(NULL));
    int x = (rand()%100);
    return x;
}
int main(){
    int numero, contador=0;
    printf("tente adivinhar o numero:\n");
    int comp = sorteia();
    scanf("%d", &numero);
    fflush(stdin);
    while(numero != comp)
    {
            if(numero > comp){
                printf("tente um numero menor\n");
            }
            else{
                    printf("tente um numero maior\n");
            }
            scanf("%d", &numero);
            fflush(stdin);
            contador++;
    }
    printf("parabens numero certo, na %do tentativa vc acertou", contador+1);

}
