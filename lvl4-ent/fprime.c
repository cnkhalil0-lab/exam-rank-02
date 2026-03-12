#include <stdlib.h>
#include <stdio.h>

int main (int argc , char **argv)
{
    if(argc != 2)
    {
        printf("\n");
        return 0;
    }
    int number = atoi(argv[1]);
    if(number == 1)
    {
        printf("1");
        return 0;
    }
    int i = 2;
    while (number >= i)
    {
        if(number % i == 0)
        {
            printf("%d", i);
            if(number == i)
            break;
             printf("*");
            number = number / i;
        }
        else
        i++;
    }
     printf("\n");
        return 0;
}