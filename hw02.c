#include <stdio.h>
#include <locale.h>

int main (int argc, const char** argv)
{
    setlocale(LC_ALL, "Rus");

    int number;

    // --1--
    // printf("������� ����� �����: ");
    // scanf("%d", &number);
    // printf("����� %d %s��������� � ��������� �� 0 �� 100 ������������\n",
    //         number, (number >= 0 && number <= 100) ? "" : "�� ");

    // --2--
    float avg = 0.0;
    for (int i = 0; i < 10; i++)
    {
        printf("������� ����� ����� �%d: ", i);
        scanf("%d", &number);
        avg += number;
    }
    avg /= 10.0;
    printf("������� �������������� ��������� �����: %f", avg);

    return 0;
}