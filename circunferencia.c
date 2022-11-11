#include <stdio.h>

void calcula_circulo(float r, float *a, float *c);
const float pi = 3.14159265;

int main(){
    float r, a, c;
    do{
        printf("Digite o tamanho do raio em cm: ");
        scanf("%f", &r);
        fflush(stdin);
    }while(r <= 0);
    calcula_circulo(r, &a, &c);
    printf("o comprimento da circunferencia e de %.3fcm e a area e de %.3fcm. ", c, a);

}
void calcula_circulo(float r, float *a, float *c){
    *a = pi * r * r;
    *c = 2 * pi * r;
}
