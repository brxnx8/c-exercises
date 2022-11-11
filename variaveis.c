#include <stdio.h>

int main()
{
    int a = 13, b = 14, c = 15, d = 16;
    float f = 3.5, g = 4.5, h = 5.5;
    char var[10] = "Orlandomax";
    int x = 16;
    int* p = &a;
    for (int i = 0; i<200; i++)
    {
        printf("%d ", *(p+i));

        if ( (p+i)==&b || (p+i)==&c || (p+i)==&d || (p+i)==&f || (p+i)==&g || (p+i)==&h || (p+i)==&x || (p+i)==&var )
        {
            printf("endereço de uma das variaveis\n");
        }
        else
            {
                printf("\n");
            }
    }

}
