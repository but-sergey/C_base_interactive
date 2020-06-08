#include <stdio.h>

int main(int argc, const char** argv)
{
    char a = 11;
    char b = 15;
    printf("a = %d, b = %d\n", a, b);
    a = a ^ b;
    b = b ^ a;
    a = a ^ b;
    printf("a = %d, b = %d\n", a, b);
    a = a ^ b;
    b = b ^ a;
    a = a ^ b;
    printf("a = %d, b = %d\n", a, b);

    return 0;
}