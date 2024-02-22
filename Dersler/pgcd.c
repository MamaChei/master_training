#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b) {
    while (b != 0) {
        int c = a;
        a = b;
        b = c % b;
    }
    return a;
}

int main(int ac,char **av)
{
    int buyuk,kucuk,temp;
    if(ac==3)
    {
        if(atoi(av[1])>atoi(av[2]))
        {
            buyuk=atoi(av[1]);
            kucuk=atoi(av[2]);
            while(kucuk!=0)
            {
                temp=kucuk;
                kucuk=buyuk%kucuk;
                buyuk=temp;
            }
            printf("%d",buyuk);
        }
        else if(atoi(av[2])>atoi(av[1]))
        {
            buyuk=atoi(av[2]);
            kucuk=atoi(av[1]);
            while(kucuk!=0)
            {
                temp=kucuk;
                kucuk=buyuk%kucuk;
                buyuk=temp;
            }
            printf("%d",buyuk);
        }
        else{
            printf("%d",atoi(av[1]));
        }
    }

    return 0;
}