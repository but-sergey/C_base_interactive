#include <stdio.h>
#include <locale.h>

void swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(int argc, const char** argv)
{
    setlocale(LC_ALL, "Rus");

    int a = 50;
    printf("�������� a = %d\n", a);
    printf("����� a: %p\n", &a);
    int* pointer;
    pointer = &a;
    printf("�������� ��������� pointer = %p\n", pointer);
    printf("����� ��������� pointer = %p\n", &pointer);
    printf("���������� pointer ��������� ��: %d\n", *pointer);
    *pointer = 70;
    printf("�������� a = %d\n", a);

    int b = 10;
    printf("a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("a = %d, b = %d\n", a, b);

    return 0;
}