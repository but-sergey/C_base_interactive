// Курс "Основы С. Интерактивный курс"
// Урок 1. Введение
// Бут Сергей
// Среда Visual Studio Code 1.45.1

#include <stdio.h>

int main(int args, const char** argv) {
    // -- 1 --
    printf("Hello world\n");
    printf("Enter an integer value: ");
    // -- 2 --
    int input;
    scanf("%d", &input);
    printf("%d in a square is %d\n", input, input*input);
    return 0;
}