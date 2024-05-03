#include <stdio.h>
#include <stdlib.h>


int ft_strlen(char *str)
{
    int i=0;
    while(str[i])
    {    
        i++;
    }
    return i+1;
}
int ft_atoi(char *str)
{
    int i=ft_strlen(str);
    int toplam=0;
    int j=1;
    while(str[i-1]>=0)
    {
        toplam+=(str[i-1]-'0')*j;
        i--;
        j*=10;
    }
    return toplam;
}

int main()
{
    char str[10]="13";
    printf("%d",ft_atoi(str));
}