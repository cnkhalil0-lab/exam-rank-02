#include <stdlib.h>
#include <stdio.h>
#include <limits.h>


char * itoa (int n)
{
    int w = 0;
    int len = 1;
    long nbr = n;

    if(nbr <= 0)
    {
        nbr = -nbr;
        w = 1;
        if(nbr == 0)
        w = 2;
        len ++;
    }
    long tmp = nbr;
    while(tmp >= 10)
    {
        len++;
         tmp = tmp / 10;
    }
    char *str = malloc (len * sizeof(char) + 1);
    str[len] = '\0';
    if (w == 1)
        str[0] = '-';
    if(w == 2)
        str[0] = '0';
    while(nbr > 0)
    {
        str[--len] = nbr % 10 + '0';
        nbr = nbr /10;
    }
    return str;
}

int main ()
{
    printf("%s",itoa(-1));
}