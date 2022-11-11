#include <stdio.h>

int main()
{
    int segundos, horas, minutos;
    segundos = 0;
    printf("Digite um valor em segundos para ser transformado em horas: ");
    scanf("%d", &segundos);
    if (segundos >= 3600){
        horas = segundos / 3600;
        segundos = segundos%3600;
        printf("%d hora(s)", horas);
    }
    if (segundos >= 60){
        minutos = segundos/60;
        segundos = segundos%60;
        printf(" %d minuto(s)", minutos);
    }
    if(segundos>0){
        printf(" %d segundo(s)", segundos);
    }

}
