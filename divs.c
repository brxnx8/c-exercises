#include <stdio.h>

int divs(int n, int *max, int *min);

int main(){
    int n, max, min;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    if (divs(n, &max, &min)){
        printf("O menor divisor diferente de 1 do numero %d eh %d e o maior divisor diferente dele mesmo eh %d.",n ,min, max);
    }else{
        printf("o numero eh primo");
    }

}
int divs(int n, int *max, int *min){
    int divisores = 0;
    *max = 1;
    *min = 0;
    for (int c = 1; c <= n/2; c++){
        if(n%c == 0){
            divisores += 1;
            if(c != n){
                *max = c;
            }
            if(c != 1 && *min == 0){
                *min = c;
            }
        }
    }
    if (divisores > 2){
        return 1;
    }else {
        return 0;
    }
}
