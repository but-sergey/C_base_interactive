#include <stdio.h>
#include <locale.h>

FILE *f;

int main(int argc, const char** argv)
{
    setlocale(LC_ALL, "Rus");

    f = fopen("filename.txt", "w");
    if (f == NULL)
        return 1;

    fprintf(f, "Hello, file! %s", "We actually did it!");
    fclose(f);

    f = fopen("filename.txt", "r");
    char word[256];
    while (!feof(f))
    {
        fscanf(f, "%s", word);
        printf("%s | ", word);
    }
    fclose(f);

    return 0;
}