#include <stdio.h>
#include <stdlib.h>

int ft_isupper(char a) {
    return (a <= 'Z' && a >= 'A');
}

int ft_islower(char a) {
    return (a <= 'z' && a >= 'a');
}


int main(int ac,char **av)
{
    int i=0,j=1;
    while(av[j])
    {    
        i=0;
        while(av[j][i]) {
            if (ft_isupper(av[j][i]))
                av[j][i] += 32;
            i++;
        }
        i = 0;
        while(av[j][i])
        {
            if(ft_islower(av[j][i]) && i == 0)
            {    
                av[j][0]=av[j][0]-32;
            }
            else if(av[j][i-1]==' ')
            {
                if(ft_islower(av[j][i]))
                    av[j][i]=av[j][i]-32;
            }
            else
            {       
                if(ft_isupper(av[j][i]))
                    av[j][i]=av[j][i]+32;
            }
            printf("%c",av[j][i]);
            i++;        
        }
        printf("\n");
        j++;
    }
    
return 0;
}