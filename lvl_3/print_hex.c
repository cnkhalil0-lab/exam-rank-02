#include <unistd.h>
#include <stdio.h>
int ft_atoi (char *str)
{
    int i = 0;
    int signe = 1;
    int result = 0;
        while (str[i] >= 9 && str[i] <= 13)
         i++;
        if(str[i] == '-')
        {
            signe = -1;
            i++;
        }
        if(str[i] == '+')
            i++;
        while (str[i] <= '9' && str[i] >= '0')
        {
            result = result * 10 + str[i] - '0';
            i++; 
        }
        return(signe * result);
}
void convert (int nbr)
{
    char s[] = "0123456789abcdef";
    if(nbr > 15)
        convert(nbr / 16);
    char w = s[nbr % 16];
    write(1, &w , 1);
}
int main (int argc, char **argv)
{
    if (argc != 2)
    {
        write(1, "\n", 1);
        return 0;
    }
    int a = ft_atoi(argv[1]);
    convert(a);
    return 0;
}

