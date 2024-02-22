#include <stdlib.h>
#include <stdio.h>

int main(int ac,char **av)
{
    if(ac==2)
    {
        int i=0;
        while(av[1][i])
        {
            if(av[1][i]<='z' && av[1][i]>='a') 
            {
                if(av[1][i]-13<='z' && av[1][i]-13>='a')
                {
                    printf("%c",av[1][i]-13);
                }
                else
                {
                    printf("%c",av[1][i]+13);
                }
            }
            else if(av[1][i]<='Z' && av[1][i]>='A')
            {
                if(av[1][i]-13<='Z' && av[1][i]-13>='A')
                {
                    printf("%c",av[1][i]-13);
                }
                else
                {
                    printf("%c",av[1][i]+13);
                }   
            }
            else
            {
                printf("%c",av[1][i]);
            }
            i++;
        }
    

    }
    else
        return 0;

    return 0;
}