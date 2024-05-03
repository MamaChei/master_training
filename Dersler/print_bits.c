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
// 10
void	print_bits(unsigned char octet) {
int i=8; // 000000000

while(i--)
{
    printf("%c",(octet >> i & 1) + '0');
}
}
/*
    bu fonksiyon int dondurup icine arguman olarak int aliyor.
    bu fonksiyonun amaci eger verilen arguman ikinin ustu ise True ! False;

*/ 


/*
8 = 1000  16 = 10000
7 = 0101  15 = 01111
6 = 0010  14 = 01110

*/

int st2(int a) {
return(!(a & (a-1)));
}

int main() {
    printf("%d",st2(16));
}