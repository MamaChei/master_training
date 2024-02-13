#include <stdlib.h>
#include <stdio.h>

int is_power_of_2();

int main()
{
    int sayi;
    scanf("%d",&sayi);
    

    is_power_of_2(sayi);
    
    if(is_power_of_2(sayi)==1)
    {
        printf("Bu sayi 2'nin kuvvetidir");
    }
    else 
    {
        printf("Bu sayi 2'nin kuvveti degildir");
    }

    return 0;
}

int is_power_of_2(int sayi)
{
    return (!(sayi & (sayi - 1)));
}