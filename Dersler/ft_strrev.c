#include <stdlib.h>
#include <stdio.h>

void ft_strrev();

int main()
{
    char kelime[50]="Tersten yaziyorum";
    ft_strrev(kelime);
    
    return 0;
}

void ft_strrev(char kelime[50])
{
    int i=0;
    while(kelime[i])
    {
        i++;
    }
    while(i>=0)
    {
        printf("%c",kelime[i-1]);
        i--;

    }

}