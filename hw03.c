/* ���� "������ �. ������������� ����"
 * ���� 3. �������, ������� � ���������
 * ������������ ������
 *
 * �������� ��� ������
 * ����� Visual Studio Code v1.45.1
 */
#include <stdio.h>
#include <locale.h>
#include <math.h>

int calcSquareEq(int a, int b, int c, double* x1, double* x2)
{
    double _x1, _x2;
    int D = b * b - 4 * a * c;

    if (D < 0)
    {
        *x1 = 0;
        *x2 = 0;
        return -1;
    }
    else if (D == 0)
    {
        *x1 = (double) -b / 2 / a;
        *x2 = *x1;
        return 0;
    }
    else
    {
        *x1 = (-b + sqrt(D)) / 2 / a;
        *x2 = (-b - sqrt(D)) / 2 / a;
        return 1;
    }
}

int main(int argc, const char** argv)
{
    setlocale(LC_ALL, "Rus");
    
    // --1--
    int a, b, c;
    double x1, x2;

    printf("������� ������������ ����������� ��������� a*x*x + b*x + c = 0 (a != 0)\n");
    do
    {
        printf("����������� a �� ����� ���� ����� 0.\n");
        printf("a = ");
        scanf("%d", &a);
    } while (a == 0);
    printf("b = ");
    scanf("%d", &b);
    printf("c = ");
    scanf("%d", &c);

    switch (calcSquareEq(a, b, c, &x1, &x2))
    {
    case -1:
        printf("��������� ������ �� �����\n");
        break;
    case 0:
        printf("��������� ����� ���� ������: x1 = x2 = %f\n", x1);
        break;
    case 1:
        printf("��������� ����� ��� �����: x1 = %f; x2 = %f\n", x1, x2);
        break;
    default:
        printf("���-�� ����� �� ���...\n");
        break;
    };
    
    return 0;
}