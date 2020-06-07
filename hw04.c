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

// --2--
struct rectangle
{
    int height;
    int width;
    int area;
    int perimeter;
};
typedef struct rectangle Rectangle;

void calcRectangle(Rectangle* rect)
{
    rect->area = rect->height * rect->width;
    rect->perimeter = 2 * (rect->height + rect->width);
}

// =====================================
int main(int argc, const char** argv)
{
    setlocale(LC_ALL, "Rus");

    // --1--
    // int num;
    // char binary[64];
    // printf("Введите целое число: ");
    // scanf("%d", &num);
    // decToBin(num, binary);
    // printf("Число %d в двоичной системе равно %s", num, binary);

    // --2--
    Rectangle rect;
    printf("Введите высоту прямоугольника: ");
    scanf("%d", &rect.height);
    printf("Введите ширину прямоугольника: ");
    scanf("%d", &rect.width);
    calcRectangle(&rect);
    printf("Периметр прямоугольника равен %d, а площадь равна %d\n", rect.perimeter, rect.area);

    return 0;
}