#include <stdlib.h>
#include <stdio.h>

int main(int ac,char **av)
{
    if(ac==2)
    {
        int i=0;
        while(av[1][i])
        {
            i++;
        }
        while(i>=0)
        {
            printf("%c",av[1][i]);
            i--;
        }
    }
    else
        return 0;
    


    return 0;
}