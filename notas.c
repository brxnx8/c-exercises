#include <stdio.h>

int total_de_notas(int valor);

int main ()
{
    int valor, notas;
    printf("Digite um valor inteiro em reais: ");
    scanf("%d", &valor);
    notas = total_de_notas(valor);
    printf("minimo de %d nota(s) para este valor.", notas);
}

int total_de_notas(int valor)
{
     int soma;
     soma += (valor / 100);
     valor %= 100;
     soma += (valor / 50);
     valor %= 50;
     soma += (valor / 20);
     valor %= 20;
     soma += (valor / 10);
     valor %= 10;
     soma += (valor / 5);
     valor %= 5;
     soma += (valor / 2);
     valor %= 2;
     soma += (valor / 1);
     valor %= 1;
     return soma;

}
