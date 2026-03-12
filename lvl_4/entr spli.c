#include <stdlib.h>
#define SSS 1000
#define BBB 1000

char    **ft_split(char *str)
{
    int i = 0;
    int i2 = 0;
    int i3;
    char **rslt = malloc(sizeof(char *) * SSS);
        while (str[i] == ' ' || str[i] == '\t', str[i] == '\0')
        i++;
        while (str[i])
        {
            if(str[i] > 32)
            {
                i3 = 0;
                rslt[i2] = malloc(sizeof(char) * BBB);
                while(str[i] > 32)
                {
                    rslt[i2][i3] = str[i];
                    i++;
                    i3++;
                }
                rslt[i2][i3] ='\0';
                i2++;
            }
            else 
            i++
        }
    rslt[i2] = 0;
    return rslt;
}
