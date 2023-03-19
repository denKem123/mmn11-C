#include <stdio.h>

int my_strcmp(char[], char[]);
int my_strncmp(char[], char[], int);

int main()
{
    printf("\n %d \n", my_strcmp("abc", "abc\1"));
    printf("\n %d \n", my_strncmp("abdddd", "absdsdadfadddd", 2));
    return 0;
}

/* getline: read a line into s, return length */
int my_strcmp(char cs[], char ct[])
{
    my_strncmp(cs, ct, -1);
}

int my_strncmp(char cs[], char ct[], int n)
{
    int i;
    for (i = 0; cs[i] || ct[i] || n == i; i++)
    {
        if (cs[i] != ct[i])
            return cs[i] - ct[i];
    }
    return n == i ? 0 : cs[i] - ct[i];
}
