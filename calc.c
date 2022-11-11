#include <stdio.h>

int main()
{
    int valida = 2;
    float number, number2, resultado;
    char simb;
    while(valida)
    {
        printf("digite um simbolo de operacao(+, -, * ou /): ");
        scanf("%c", &simb);
        fflush(stdin);
        if (simb == '+' || simb == '-' || simb == '*' || simb == '/'){
            valida = 0;
        }
        else{
            printf("erro na digitacao\n");
        }
    }
    printf("Digite um numero: ");
    scanf("%f", &number);
    printf("Digite outro numero: ");
    scanf("%f", &number2);
    switch (simb){
        case '+':
            resultado = number2 + number;
            break;
        case '-':
            resultado = number - number2;
            break;
        case '*':
            resultado = number2 * number;
            break;
        case '/':
            resultado = number / number2;
            break;
    }
    printf("o resultado e %.2f", resultado);
}
