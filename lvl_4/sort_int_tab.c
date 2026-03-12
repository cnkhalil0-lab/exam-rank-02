#include <stdio.h>

void sort_int_tab(int *tab, unsigned int size)
{
    int i = 0;
    int a = 0;
    while (a < size)
    {
        i = 0;
        while (i < size)
        {
            if(tab[a] < tab[i])
            {
            int tmp = tab[a];
            tab[a] = tab[i];
            tab[i] = tmp;
            }
            i++;
        }
        a++;
    }

    while (size)
    {
        printf("%d ", *tab++);
        size--;
    }
}

int main ()
{
    int tab [] = {0, 12, 2, 6, 3, 14, 3, 99};
    sort_int_tab(tab, 8);

}