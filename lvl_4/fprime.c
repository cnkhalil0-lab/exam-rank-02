#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	number;

	// Étape 1 : Vérification de l'argument
	if (argc != 2)
	{
        printf("\n");
        return 0;
    }
    number = atoi(argv[1]);
    if (number == 1)
    {
        printf("1\n");
        return 0;
    }
    i = 2;
    while (i <= number)
    {
        if(number % i == 0)
        {
        printf("%d", i);
        if (i == number)
        break;
            printf("*");
        number = number / i;
        }
        else 
        i++;
    }
    return 0;
}
		