#include <stdio.h>
#include <locale.h>

struct fraction
{
    int integer;
    int divisible;
    int divider;
};
typedef struct fraction Fraction;

void frPrint(Fraction f)
{
    if (f.divisible != 0)
    {
        if (f.integer == 0)
        {
            printf ("%d / %d", f.divisible, f.divider);
        }
        else
        {
            printf("%d | %d / %d", f.integer, f.divisible, f.divider);
        }
    }
    else
    {
        printf("%d", f.integer);
    }
}

void frDesinteger(Fraction* f)
{
    int sign = (f->integer < 0) ? -1 : 1;
    if (f->integer < 0)
        f->integer = -f->integer;
    f->divisible = f->divisible + (f->integer * f->divider);
    f->divisible *= sign;
    f->integer = 0;
}

void frMul(Fraction f1, Fraction f2, Fraction* r)
{
    frDesinteger(&f1);
    frDesinteger(&f2);
    r->divisible = f1.divisible * f2.divisible;
    r->divider = f1.divider * f2.divider;
}

int main(int argc, const char** argv)
{
    setlocale(LC_ALL, "Rus");

    Fraction f1, f2, result;
    f1.integer = -1;
    f1.divisible = 1;
    f1.divider = 5;
    f2.integer = 1;
    f2.divisible = 1;
    f2.divider = 5;
    result.integer = 0;
    result.divisible = 0;
    result.divider = 0;

    frPrint(f1);
    puts("");
    frPrint(f2);
    puts("");

    frMul(f1, f2, &result);
    frPrint(result);

    return 0;
}