#include <stdio.h>
#include <locale.h>

int main(int argc, const char** argv)
{
    setlocale(LC_ALL, "Rus");

    const int ROWS = 10;
    const int COLS = 10;
    int table[ROWS][COLS];

    int r;
    int c;
    for (r = 0; r < ROWS; r++)
    {
        for (c = 0; c < COLS; c++)
        {
            table[r][c] = (r + 1) * (c + 1);
        }
    }

    // int arr[3][4] = {
    //     {0, 1, 2, 3},
    //     {4, 5, 6, 7},
    //     {8, 9,10,11}
    // };

    for (r = 0; r < ROWS; r++)
    {
        for (c = 0; c < COLS; c++)
        {
            printf("%3d", table[r][c]);
        }
        printf("\n");
    }
    printf("\n");

    // char* stringArray[3] = {"Hello", "C-language", "World"};

    return 0;
}