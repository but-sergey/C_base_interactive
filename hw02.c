#include <stdio.h>
#include <locale.h>

int main (int argc, const char** argv)
{
    setlocale(LC_ALL, "Rus");
    // --1--
    int number;
    printf("¬ведите целое число: ");
    scanf("%d", &number);
    printf("„исло %d %sнаходитс€ в диапазоне от 0 до 100 включительно\n",
            number, (number >= 0 && number <= 100) ? "" : "не ");

    return 0;
}