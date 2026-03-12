#include <stdlib.h>
#include <stdio.h>


int main (int argc, char **argv)
{
    if (argc != 3)
    {
        printf("\n");
        return 0;
    }
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    int div;
    if(a > b)
     div = b;
    else 
     div = a;
    while (div >= 1)
    {
        if(a % div == 0 && b % div == 0)
        {
            printf("%d \n", div);
            return 0;
        }
        div--;
    }
    print("")

return 0;
}