#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *a)
{
    int i=0;
    while(a[i])
    {
        i++;
    }
    return i;

}

int ft_strcmp(char *str,char *str2)
{
    int i = 0;
    char *uzun_str;
    char *kisa_str;
    int fark;
    if(ft_strlen(str) > ft_strlen(str2)) {
        uzun_str = str;
        kisa_str = str2;
    }
    else
    {
        uzun_str=str2;
        kisa_str=str;
    }
    while(uzun_str[i])
    {
        if(uzun_str[i] != kisa_str[i])
            return (uzun_str[i] - kisa_str[i]);
        i++;
    }
    return 0;

}

int main()
{
    char str[]="absd";
    char str2[]="absd";
    if (!ft_strcmp(str,str2))
    {
        printf("calisti\n");
    }
    else
        printf("calismadi :( \n)");

}