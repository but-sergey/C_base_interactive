// Курс "Основы С. Интерактивный курс"
// Урок 1. Введение
// Бут Сергей
// Среда Visual Studio Code 1.45.1

#include <stdio.h>

int main(int args, const char** argv) {
    printf("Hello world\n");
    printf("Введите целое число: ");
    int input;
    scanf("%d", &input);
    printf("Число %d в квадрате равно %d\n", input, input*input);
    return 0;
}