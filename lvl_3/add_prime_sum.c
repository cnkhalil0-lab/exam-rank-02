#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nbr)
{
    if(nbr < 0)
    {
        nbr = -nbr;
        ft_putchar('-');
    }
    if(nbr > 9)
    ft_putnbr(nbr/10);
    ft_putchar(nbr % 10 + '0');
}

int ft_atoi(char *str)
{
    int i = 0;
    int signe = 1;
    int nbr = 0;
    while (str[i] == ' ' || str[i] >= 9 && str[i] <= 13)
        i++;
    if(str[i] == '+')
    i++;
    if(str[i] == '-')
    {
        signe = -1;
        i++;
    }
    while(str[i] <= '9' && str[i] >= '0')
    {
        nbr = nbr * 10 + str[i] - '0';
        i++;
    }
    return(nbr);
}
int is_prime (int x)
{
    int div = 2;
    while (x > div)
    {
        if (x % div == 0)
        return 0;
        div ++;
    }
    return 1;
}

int add_prime_sum(int a)
{
    int result = 0;
    int i = 2;
    while (a >= i)
    {
        if(is_prime(i) == 0)
        i++;
        else 
        {
            result += i;
            i++;
        }
    }
    return result;
}
int main(int argc, char **argv)
{
    int nbr;

    if(argc == 2)
    {
        nbr = ft_atoi(argv[1]);
        ft_putnbr(add_prime_sum(nbr));
    }
    else 
    {
        write(1, "0\n", 2);
        return 0;
    }
}