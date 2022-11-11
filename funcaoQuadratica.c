#include <stdio.h>

float calculaRaiz(float a, float b, float c);

int main()
{
    float a, b, c;
    printf("Digite valores para a, e c em ax^2 + bx + c:\n");
    printf("a: ");
    scanf("%f", &a);
    fflush(stdin);
    printf("b: ");
    scanf("%f", &b);
    fflush(stdin);
    printf("c: ");
    scanf("%f", &c);
    fflush(stdin);
    float resultado = calculaRaiz(a, b, c);
    if (resultado != 0){
        printf("o resultado e %.2f", resultado);
    }
}

float calculaRaiz(float a, float b, float c)
{
    float delta, x, x2;
    delta = b * b - 4 * a * c;
    x = (-b + sqrt(delta))/2*a;
    if (delta < 0)
    {
        printf("delta negativo, nao ha raiz");
        return 0;
    }
    if(delta > 0){

        x2 = (-b - sqrt(delta))/2*a;
        printf("o resultado e %.2f e ", x2);
        return x;
    }
    if (delta==0){
        return x;
    }
}
