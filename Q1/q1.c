#include <stdio.h>
#define MINSIZE 80

int my_strcmp(char[], char[]);
int my_strncmp(char[], char[], int);
int my_strchr(char[], char);

int main()
{

    return 0;
}

/*
    my_strcmp: compare string cs to string ct;
    params: 
     cs - target string; 
     ct - comparable string

    return: the returned value from my_strncmp without max char condition (-1)
*/
int my_strcmp(char cs[], char ct[])
{
    return my_strncmp(cs, ct, -1);
}

/*
    my_strncmp: compare at most n characters of string cs to string ct;
    params: 
     n - max characters to compare;
     cs - target string; 
     ct - comparable string
    
    * in case n is a negative number it will compare  cs to ct without max characters condition
    return: <0 if cs<ct,  0 if cs==ct, >0 if cs>ct
*/
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

/*
    my_strncmp: find the first instance of a character in a cs
    params: 
     c - max characters to compare;
     cs - target string; 
    
    return: index of the first char found or -1 if non has found
*/
int my_strchr(char cs[], char c)
{
    for (int i = 0; cs[i]; i++)
    {
        if (cs[i] == c)
            return i;
    }
    return -1;
}
