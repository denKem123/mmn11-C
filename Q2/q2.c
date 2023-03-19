#include <stdio.h>
#define MAXLINE 1000
#define MINLINE 80

int getline(char line[], int maxline);
void removeblank(char line[],int linelength);
void copy(char to[], int from);

int main()
{
    printf("\nHello World\n");
    /*int len;
    char line[MAXLINE];

    while ((len = getline(line, MAXLINE)) > 0)
        if (len > MINLINE)
            printf("%s", line);
            */
    return 0;
    
}

/* getline: read a line into s, return length */
int getline(char line[], int maxline)
{
    int i, c;

    for (i = 0; i < maxline - 1 && (c = getchar()) != EOF; i++)
    {
        line[i] = c;
        if (c != '\n')
            break;
    }
    line[i] = '\0';
    return i;
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
