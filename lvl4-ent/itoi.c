#include <stdlib.h>
#include <stdio.h>

char	*ft_itoa(int nbr)
{
    int i = 0;
    int len = 1;
    int tmp;
    int w = 0;
    if (nbr < 0)
    {
        nbr = -nbr;
        len ++;
        w = 1;
    }
    tmp = nbr;
    while(tmp > 9)
    {
        tmp = tmp / 10;
        len ++;
    }
    char *tab = malloc ((len + 1) * sizeof(char));
    if (tab == NULL)
    return 0;
    tab[len] = '\0';
    len --;
    while (len >= 1)
    {
        tab[len] = nbr % 10 + '0';
        nbr = nbr / 10;
        len --;
    }
    if(w == 1)
    tab[len] = '-';
    else 
   tab[len] = nbr % 10 + '0';
    return tab;
}
int main ()
{
    printf("%s", ft_itoa(0));
}