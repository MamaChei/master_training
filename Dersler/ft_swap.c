#include <stdio.h>
#include <stdlib.h>

void ft_swap(int *a,int *b)
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
    
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d %d\n",a,b);
    ft_swap(&a,&b);
    printf("%d %d",a,b);
}