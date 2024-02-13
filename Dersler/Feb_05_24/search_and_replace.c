#include <stdlib.h>
#include <stdio.h>

int main(int ac,char **av)
{
    int j=0,k=0;
    while(av[2][j])
    {
        j++;
    }
    if(j>1)
        return 0;
    while(av[3][k])
    {
        k++;
    }
    if(k>1)
        return 0;
    
    if(ac==4)
    {
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
        

    }
    else
        return 0;
    

    return 0;
}