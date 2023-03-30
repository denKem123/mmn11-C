#include <stdio.h>

int bits_count(unsigned long l);

int main()
{
    int w;
    unsigned long n;
    char msg1[] = "\nEnter a positive long int - to see how may of his even located bits are on: \n";
    do
    {
        printf("%s",msg1);
        w = scanf("%lu", &n);        
        if (w == EOF)
            return -1;
    } while (w != 2);
    printf("\nthe number you entered is: %lu", n);
    int count = bits_count(n);
    printf("\nhis number of even bits that are turned on is: %d", count);

    return 0;
}

/* 
    its_count: return the count of all the on bits that are in an even location.
*/
int bits_count(unsigned long l)
{
    int count = 0;
    unsigned long mask;

    for (mask = 1 << (sizeof(unsigned long) * 8 - 2); mask; mask >>= 2)
    {
        count += l & mask ? 1 : 0;
    }
    return count;
}
