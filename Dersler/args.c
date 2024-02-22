#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av) {

    if(ac!=3)
        return 0;

    printf("%d",atoi(av[1])*atoi(av[2]));
    
}

