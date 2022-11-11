#include <stdio.h>

void fibo(int n){
    int ant = 0;
    int suc = 1;
    int soma = 0;
    for(int i=0; i<n; i++){
        ant = suc;
        suc = soma;
        soma = ant + suc;
        printf("%d ", soma);

    }
}

int main(){
    int n=0;
    printf("digite o numero de termos: ");
    scanf("%d", &n);
    fibo(n);
}
