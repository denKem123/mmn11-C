#include <stdio.h>
#define MAXLINE 1000
#define MINLINE 80

int my_strcmp(char cs[], char ct[]);
void my_strncmp(char cs[], char ct[]);
void copy(char to[], int from);

int main()
{
    printf("\n %d \n", my_strcmp("abc", "adc"));
    return 0;
}

/* getline: read a line into s, return length */
int my_strcmp(char cs[], char ct[])
{
    int i;
    for (i = 0; cs[i] || ct[i]; i++)
    {
        if (cs[i] != ct[i])
            return cs[i] - ct[i];
    }
    return cs[i] - ct[i];
}

void removeblank(char line[], int linelength)
{
    int i = 0;

    while (line[i] != '\0' && i < linelength - 1)
    {
        if (line[i] == '\t' || line[i] == ' ')
            line[i] = line[i + 1];
        else
            i++;
    }
    if (line[i] == '\t' || line[i] == ' ')
        line[i] = '\0';
}
