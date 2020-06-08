#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

void helloFunction(char* name, char* out)
{
    char welcome[255] = "Hello, ";
    name[0] = tolower(name[0]);
    if (strcmp("sergey", name) == 0)
    {
        strcpy(name, "Master");
    }
    name[0] = toupper(name[0]);
    strcat(welcome, name);
    strcpy(out, welcome);
}

int main(int argc, const char** argv)
{
    setlocale(LC_ALL, "Rus");

    char string1[256] = "This is a string!";
    char* string2 = "This is also a string";

    printf("%s\n", string1);
    printf("%s\n", string2);

    string1[5] = 'X';
    printf("%s\n", string1);

    char name[255];
    char result[255];
    gets(name);
    puts(name);
    helloFunction(name, result);
    printf("%s\n", result);

    // char num[64];
    // puts("Введите число: ");
    // gets(num);
    // int number = atoi(num);
    // number *= number;
    // printf("Мы возвели Ваше число в квадрат: %d", number);

    // string2[5] = 'X';
    // printf("%s\n", string2);

    return 0;
}