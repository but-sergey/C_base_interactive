#include <stdio.h>
#include <locale.h>

int main (int argc, const char** argv)
{
    setlocale(LC_ALL, "Rus");

    int number;

    // --1--
    // printf("¬ведите целое число: ");
    // scanf("%d", &number);
    // printf("„исло %d %sнаходитс€ в диапазоне от 0 до 100 включительно\n",
    //         number, (number >= 0 && number <= 100) ? "" : "не ");

    // --2--
    float avg = 0.0;
    for (int i = 0; i < 10; i++)
    {
        printf("¬ведите целое число є%d: ", i);
        scanf("%d", &number);
        avg += number;
    }
    avg /= 10.0;
    printf("—реднее арифметическое введенных чисел: %f", avg);

    return 0;
}