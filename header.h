int isPrime(int number)
{
    int d = 0;
    int i = 1;
    while (i <= number)
    {
        if (number % i++ == 0)
            d++;
        else
            continue;

        if (d == 3)
            return 0;
    }
    return (d == 2);
}

int sum(const int a, const int b)
{
    return a + b;
}