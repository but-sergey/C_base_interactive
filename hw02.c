/* Курс "Основы С. Интерактивный курс"
 * Урок 2. Условия и циклы
 * Практическая работа
 *
 * Выполнил Бут Сергей
 * Среда Visual Studio Code v1.45.1
 */


#include <stdio.h>
#include <locale.h>

int main (int argc, const char** argv)
{
    setlocale(LC_ALL, "Rus");

    int number;

    // --1--
    // printf("Введите целое число: ");
    // scanf("%d", &number);
    // printf("Число %d %sнаходится в диапазоне от 0 до 100 включительно\n",
    //         number, (number >= 0 && number <= 100) ? "" : "не ");

    // --2--
    // float avg = 0.0;
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("Введите целое число №%d: ", i);
    //     scanf("%d", &number);
    //     avg += number;
    // }
    // avg /= 10.0;
    // printf("Среднее арифметическое введенных чисел: %f", avg);

    // --3--
    // do 
    // {
    //     printf("Введите число от 0 до 1000 включительно: ");
    //     scanf("%d", &number);
    // } while (number < 0 || number > 1000);

    // printf("Положительные четные числа от 0 до %d: 0", number);
    // for (int i = 2; i <= number; i += 2)
    // {
    //     printf(", %d", i);
    // }
    // printf(".\n");

    // --4--
    printf("Введите количество строк для треугольника: ");
    scanf("%d", &number);
    int line = 0;
    for (int i = 0; i < number; i++)
    {
        for (int j = 0; j < (number - i - 1); j++)
            printf(" ");
        for (int j = 0; j < ((i + 1) * 2 - 1); j++)
            printf("^");
        printf("\n");
    }

    return 0;
}