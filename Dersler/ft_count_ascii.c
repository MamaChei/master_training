#include <stdlib.h>
#include <stdio.h>

int main(int ac,char **av)
{
    int map[127]={0};
    int i,j;
    for(i=1;i<ac;i++)
    {
        for(j=0;av[i][j] != '\0';j++)
        {
            map[av[i][j]]++;
        }
    }
    i=0;
    while(i<127)
    {
        printf("%c. %d\n",i,map[i]);
        i++;
    }
    
    

}