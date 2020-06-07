#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

// --1--
void decToBin(int num, char* result)
{
    char out[64];
    int temp = num;
    int i = 0;
    while (temp != 0)
    {
        temp /= 2;
        i++;
    }
    out[i] = '\0';
    while (num != 0)
    {
        out[--i] = ((num % 2 == 0) ? '0' : '1');
        num /= 2;
    }
    strcpy(result, out);
}

int main(int argc, const char** argv)
{
    setlocale(LC_ALL, "Rus");

    // --1--
    int num;
    char binary[64];
    printf("������� ����� �����: ");
    scanf("%d", &num);
    decToBin(num, binary);
    printf("����� %d � �������� ������� ����� %s", num, binary);

    return 0;
}