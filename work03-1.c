#include <stdio.h>
#include <locale.h>
#include "header.h"

int sum(const int a, const int b);
int isPrime(int number);

int main(int argc, const char** argv)
{
    setlocale(LC_ALL, "Rus");

    // int x = sum(50, 60);
    printf("Сумма двух чисел = %d", sum(50, 5));
    
    int number = 71;
    printf("Введенное число %d %sявляется простым\n", number, isPrime(number) ? "" : "не ");

    return 0;
}
