#include <stdio.h>
#include <locale.h>

int main(int argc, const char** argv)
{
    setlocale(LC_ALL, "Rus");

    // int number;
    // printf("Введите, пожалуйста, число: ");
    // scanf("%d", &number);
    // int d = 0;
    // int i = 1;
    // while (i <= number)
    // {
    //     if (number % i++ == 0)
    //     {
    //         d++;
    //     }
    //     else
    //     {
    //         continue;
    //     }
        
    //     if (d >= 3)
    //     {
    //         break;
    //     }
    // }
    // printf("Введенное число %d %sявляется простым\n", number, (d == 2) ? "" : "не ");

    // int i;
    // int base = 2;
    // int signigicative = 10;
    // int result = 1;
    // for (i = 0; i < signigicative; i++)
    // {
    //     result *= base;
    // }
    // printf("Power: %d", result);

    float first;
    float second;
    float result;
    unsigned char operator;
    printf("Введите, пожалуйста, первый оператор: ");
    scanf("%f", &first);
    fseek(stdin, 0, SEEK_END);
    printf("Введите, пожалуйста, действие: ");
    scanf("%c", &operator);
    if (operator == '/')
    {
        do
        {
            printf("Введите, пожалуйста, второй оператор: ");
            scanf("%f", &second);
        } while (second == 0);
    }
    else
    {
        printf("Введите, пожалуйста, второй оператор: ");
        scanf("%f", &second);
    }
    switch (operator)
    {
    case '*':
        result = first * second;
        printf("%f %c %f = %f", first, operator, second, result);
        break;
    case '/':
        result = first / second;
        printf("%f %c %f = %f", first, operator, second, result);
        break;
    case '-':
        result = first - second;
        printf("%f %c %f = %f", first, operator, second, result);
        break;
    case '+':
        result = first + second;
        printf("%f %c %f = %f", first, operator, second, result);
        break;
    default:
        printf("Неизвестный оператор: %c", operator);
    }    

    return 0;
}