#include <stdio.h>
int main()
{
    int soma;
    for(int i=1000; i < 10000; i++)
    {
        soma = i/100 + i%100;
        if (soma*soma == i)
        {
            printf("O numero %d possui a seguinte caracteristica: %d + %d = %d -> %d*%d = %d.\n", i, i/100, i%100, soma, soma, soma, i);
        }

    }

}
void conferenum(int num)
{


}
