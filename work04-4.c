#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (int argc, const char** argv)
{
    setlocale(LC_ALL, "Rus");

    int* area = (int*) malloc(123);
    printf("%lu\n", sizeof(int));

    const int SIZE = 10;
    //int* array = (int*) malloc(sizeof(int) * 10);
    int* array = (int*) calloc(SIZE, sizeof(int));
    int array2[SIZE];
    int i;
    // for (i = 0; i < SIZE; i++)
    // {
    //     *(array + i) = i * 10;
    // }
    for (i = 0; i < SIZE; i++)
    {
        printf("%d ", *(array + i));
    }
    //free(array);

    printf("\n");
    for (i = 0; i < SIZE; i++)
    {
        array2[i] = i * 10;
    }
    for (i = 0; i < SIZE; i++)
    {
        printf("%d ", array2[i]);
    }
    printf("\n");

    int NEWSIZE = SIZE + 10;
    array = realloc(array, NEWSIZE * sizeof(int));

    for (i = 0; i < NEWSIZE; i++)
    {
        *(array + i) = i * 10;
    }
    for (i = 0; i < NEWSIZE; i++)
    {
        printf("%d ", *(array + i));
    }

    free(array);
    return 0;
}