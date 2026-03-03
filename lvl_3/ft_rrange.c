#include <stdio.h>
#include <stdlib.h>
int  *ft_range(int start, int end)
{
    int range;
    range = end - start;
    int i = 0;
    if (range < 0)
        range = -range;
    range += 1;
    int *liste = malloc((range) * sizeof(int));
    if (liste == NULL)
        return (0);
    if (end >= start)
    {
        while (range > 0)
        {
            liste[i] = end;
            i++;
            end --;
            range--;
        }   
    }
    else 
    {
        while (range > 0)
        {
            liste[i] = end;
            i++;
            end ++;
            range--;
        }   
    }
    return liste;
}
int main ()
{
    int *s = ft_range(-1, 2);
    int i = 0;
    while (i < 4)
    {
    printf("%d",s[i]);
    i++;
    }
    return 0;
}