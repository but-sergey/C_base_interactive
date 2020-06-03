#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

#define ARRAY_LENGTH 10
#define NUMBERS_AMOUNT 1000000
#define boolean int
#define true 1==1
#define false !true

int main(int argc, const char** argv)
{
    setlocale(LC_ALL, "Rus");

    // int arr[3];
    // arr[0] = 10;
    // arr[1] = 20;
    // arr[2] = 30;

    // int arr2[6] = {1, 1, 2, 3, 5, 8};

    // int iArr[100];
    // float fArr[54];
    // char cArr[234];

    // int elems = 20;
    // int nArr[elems];
    // for(int i = 0; i < elems; i++)
    // {
    //     nArr[i] = i;
    //     printf("%d ", nArr[i]);
    // }

    // int x = arr[0];
    // printf("arr[0] = %d\n", x);

    // int i;
    // for (i = 0; i < 6; i++)
    // {
    //     printf("%2d", arr2[i]);
    // }

    srand(time(NULL));
    int frequency[ARRAY_LENGTH] = {0};

    int a;
    int i;
    for (i = 0; i < NUMBERS_AMOUNT; i++)
    {
        a = rand() % ARRAY_LENGTH;
        frequency[a]++;
    }

    for (i = 0; i < ARRAY_LENGTH; i++)
    {
        printf("Число %d сгенерировалось %6d (%5.2f%%) раз\n",
               i, frequency[i], ((float)frequency[i] / NUMBERS_AMOUNT * 100));;
    }

    return 0;
}