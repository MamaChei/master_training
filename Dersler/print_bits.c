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

    int i = 8;

    while (i--) {
        unsigned char bit = (octet >> i & 1) + '0';
        
        printf("%c",bit);
    }
}

int main() {
    print_bits(1);
}