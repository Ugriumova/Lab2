#include <stdio.h>
#include <locale.h>

float main()
{
    int n, L;
    float p, j;
    setlocale(LC_CTYPE, "RUS");
    n = 2;
    L = 133;
    p = 2;
    j = 133;
    printf("Дано:\n\t\t%d\n\t\t%d\n\t\t________\nОтвет:\n\t\t%+d%2.4f", n, L, n / L,p/j);


}

