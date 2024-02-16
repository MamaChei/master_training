#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int ac,char **av)
{
    if(strcmp(av[1],"-f")!=0)
    {
        if(strcmp(av[2],"+")==0)
        {
            printf("%d",atoi(av[1])+atoi(av[3]));
        }
        else if(strcmp(av[2],"-")==0)
        {
            printf("%d",atoi(av[1])-atoi(av[3]));
        }
        else if(strcmp(av[2],"x")==0)
        {
            printf("%d",atoi(av[1])*atoi(av[3]));
        }
        else if(strcmp(av[2],"/")==0)
        {
            if(atoi(av[3])==0)
                printf("Bu bolme islemi mumkun degil");
        
            else
            printf("%d",atoi(av[1])/atoi(av[3]));
        }
    }
    else
    {
        if(strcmp(av[3],"+")==0)
        {
            printf("%d\n",atoi(av[2])+atoi(av[4]));
            if((atoi(av[2])+atoi(av[4]))%2==0)
                printf("Bu bir cift sayidir.");
            else
                printf("Bu bir tek sayidir");
        }
        else if(strcmp(av[3],"-")==0)
        {
            printf("%d\n",atoi(av[2])-atoi(av[4]));
            if((atoi(av[2])-atoi(av[4]))%2==0)
                printf("Bu bir cift sayidir.");
            else
                printf("Bu bir tek sayidir");
        }
        else if(strcmp(av[3],"x")==0)
        {
            printf("%d\n",atoi(av[2])*atoi(av[4]));
            if((atoi(av[2])*atoi(av[4]))%2==0)
                printf("Bu bir cift sayidir.");
            else
                printf("Bu bir tek sayidir");
        }
        else if(strcmp(av[3],"/")==0)
        {
            if(atoi(av[4])==0)
                printf("Bu bolme islemi mumkun degil\n");
            else
            printf("%d\n",atoi(av[2])/atoi(av[4]));
            if((atoi(av[2])/atoi(av[4]))%2==0)
                printf("Bu bir çift sayidir.");
            else
                printf("Bu bir tek sayidir");
        }
    }
    

    
    
    return 0;

}                                                   