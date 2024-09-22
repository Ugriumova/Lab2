#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_CTYPE, "RUS");
    int N, K;
    N = 3;
    K = 20;
    printf("Сейчас %d часа %d минут 00 секунд\n", N, K);
    printf("Идет %d минута суток\n", (N * 60) + K);
    printf("До полуночи осталось %d часов %d минут\n", 23 - N, 60 - K);
    printf("С 8.00 прошло %d секунд\n", (1440 - (480 - (N * 60 + K))) * 60);
    printf("Текуший час = %d суток и текущая минута равна = %d часа", N / 24, K / 60);

}
