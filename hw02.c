#include <stdio.h>
#include <locale.h>

int main (int argc, const char** argv)
{
    setlocale(LC_ALL, "Rus");
    // --1--
    int number;
    printf("������� ����� �����: ");
    scanf("%d", &number);
    printf("����� %d %s��������� � ��������� �� 0 �� 100 ������������\n",
            number, (number >= 0 && number <= 100) ? "" : "�� ");

    return 0;
}