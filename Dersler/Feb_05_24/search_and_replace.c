#include <stdlib.h>
#include <stdio.h>


int ft_strlen(char *c)
{
    int i=0;
    while(c[i])
    {
        i++;
    }
    return i;
}

int main(int ac,char **av)
{

    if (ac != 4) {
        printf("\n");
        return 0;
    }
    if (ft_strlen(av[2]) != 1 || ft_strlen(av[3]) != 1)
        return 0;
    int i=0;
    while(av[1][i])
    {
        if(av[1][i]==av[2][0])
        {
            av[1][i]=av[3][0];
        }
        printf("%c",av[1][i]);
        i++;
    }
    
    return 0;
}