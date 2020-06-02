// Курс "Основы С. Интерактивный курс"
// Урок 1. Введение
// Бут Сергей
// Среда Visual Studio Code 1.45.1

#include <stdio.h>

int main(int args, const char** argv) {
    // -- 1,2 --
    printf("Hello world\n");
    printf("Enter an integer value: ");
    // -- 3 --
    int input;
    scanf("%d", &input);
    printf("%d in a square is %d\n", input, input*input);
    // -- 4 --
    float Uo, Ui, R1, R2;
    Ui = Uo * (R1 + R2) / R1;
    R1 = R2 * Uo / (Ui - Uo);
    R2 = R1 * (Ui - Uo) / Uo;

    return 0;
}