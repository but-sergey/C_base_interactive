/* ���� "������ �. ������������� ����"
 * ���� 2. ������� � �����
 * ������������ ������
 *
 * �������� ��� ������
 * ����� Visual Studio Code v1.45.1
 */


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
    // float avg = 0.0;
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("������� ����� ����� �%d: ", i);
    //     scanf("%d", &number);
    //     avg += number;
    // }
    // avg /= 10.0;
    // printf("������� �������������� ��������� �����: %f", avg);

    // --3--
    do 
    {
        printf("������� ����� �� 0 �� 1000 ������������: ");
        scanf("%d", &number);
    } while (number < 0 || number > 1000);

    printf("������������� ������ ����� �� 0 �� %d: 0", number);
    for (int i = 2; i <= number; i += 2)
    {
        printf(", %d", i);
    }
    printf(".\n");

    return 0;
}