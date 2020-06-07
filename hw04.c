#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>

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

// --3--
struct point
{
    int x;
    int y;
};
typedef struct point Point;

struct line
{
    Point p1;
    Point p2;
    float length;
};
typedef struct line Line;

void CalcLine(Line* line)
{
    line->length = sqrt(pow(line->p2.x - line->p1.x, 2) + pow(line->p2.y - line->p1.y, 2));
}

// =====================================
int main(int argc, const char** argv)
{
    setlocale(LC_ALL, "Rus");

    // --1--
    // int num;
    // char binary[64];
    // printf("¬ведите целое число: ");
    // scanf("%d", &num);
    // decToBin(num, binary);
    // printf("„исло %d в двоичной системе равно %s", num, binary);

    // --2--
    // Rectangle rect;
    // printf("¬ведите высоту пр€моугольника: ");
    // scanf("%d", &rect.height);
    // printf("¬ведите ширину пр€моугольника: ");
    // scanf("%d", &rect.width);
    // calcRectangle(&rect);
    // printf("ѕериметр пр€моугольника равен %d, а площадь равна %d\n", rect.perimeter, rect.area);

    // --3--
    Line line;
    printf("¬ведите координаты начала отрезка:\nx1 = ");
    scanf("%d", &line.p1.x);
    printf("y1 = ");
    scanf("%d", &line.p1.y);
    printf("¬ведите координаты конца отрезка:\nx2 = ");
    scanf("%d", &line.p2.x);
    printf("y2 = ");
    scanf("%d", &line.p2.y);
    
    CalcLine(&line);

    printf("ƒлина отрезка с началом в точке (%d; %d) и концом в точке (%d; %d) равна %f\n",
            line.p1.x, line.p1.y, line.p2.x, line.p2.y, line.length);

    return 0;
}