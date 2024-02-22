#include <stdio.h>
#include <stdlib.h>

int pow_2();
//void print_bits();
void rev_bits();

int main(int ac,char **av)
{
if(ac==2)
    {
        //print_bits(av[1]);
        rev_bits(av[1]);    
    }
    
    return 0;
}

/*void print_bits(char av)
{
    int i=8;
    while(i-->0)
    {
        char bit=(av>>i&1)+'0';
        printf("%c",bit);
    }
}*/

void rev_bits(char *av)
{
    int i=7;
    int j=0,dizi[8];
    int sayi=atoi(av);
    while(i>=0)
    {
        if(sayi/pow_2(i)==0)
        {
            printf("%d",0);
            sayi=sayi%pow_2(i);
            dizi[j]=0;
            i--;
            j++;

        }
        else if(sayi/pow_2(i)==1)
        {
            printf("%d",1);
            sayi=sayi%pow_2(i);
            dizi[j]=1;
            i--;
            j++;

        }

    }
    printf("\n");
    for(j=7;j>=0;j--)
    {
        printf("%d",dizi[j]);
    }
}

int pow_2(int pow)
{
    int result=1;
    if(pow==0)
        return 1;
    else    
    {
        while(pow>0)
        {
            result=result*2;
            pow--;
        }
        return result;
    }   

}