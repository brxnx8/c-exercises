#include <stdio.h>
int main()
{
    unsigned int num;
    printf("digite um numero maior que 0, para ser invertido: ");
    scanf("%d", &num);
    inverte(num);

}
int inverte(unsigned int n)
{
    while(n>9)
    {
        printf("%d", n%10);
        n = n/10;

    }
    printf("%d", n);


}
