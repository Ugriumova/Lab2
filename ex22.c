#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_CTYPE, "RUS");
    int N, K;
    N = 3;
    K = 20;
    printf("������ %d ���� %d ����� 00 ������\n", N, K);
    printf("���� %d ������ �����\n", (N * 60) + K);
    printf("�� �������� �������� %d ����� %d �����\n", 23 - N, 60 - K);
    printf("� 8.00 ������ %d ������\n", (1440 - (480 - (N * 60 + K))) * 60);
    printf("������� ��� = %d ����� � ������� ������ ����� = %d ����", N / 24, K / 60);

}
