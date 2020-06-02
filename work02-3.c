#include <stdio.h>

int main(int argc, const char** argv)
{
    int a = 10;
    int b = 20;
    // while (a < b)
    // {
    //     printf("%d ", ++a);
    // }
 
    // int even = 0;
    // while (a < b)
    // {
    //     if (a % 2 == 0)
    //         even++;
    //     a++;
    // }
    // printf("There are %d even numbers\n", even);

    do
    {
        printf("Enter a divider for 100: ");
        scanf("%d", &a);
    } while (a == 0);
    printf("100 / %d = %d\n", a, 100/a);

    return 0;
}