#include <stdlib.h>
#include <stdio.h>
int main(int ac,char **av) {

    if (ac == 1)
        return 1;
            
    int map[127] = {0};
    for (int i = 1; i < ac; i++) {
        for (int j = 0; av[i][j] != '\0'; j++) {
            if (map[av[i][j]] == 0) {
                printf("%c",av[i][j]);
                map[av[i][j]]++;
            }
        }
    }
    return 1;
}

// int main(int ac,char **av)
// {  
//     if(ac==3)
//     {
//         int i=0,j=0,sayac=0;
//         while(av[1][i])
//         {
//             if(i>0)
//             {
//                 for(;j<i;j++)
//                 {
//                     if(av[1][i]==av[1][j])
//                     {
//                         break;
//                     }
//                     else{
//                         sayac++;    
//                     }
                    
//                 }
//                 if(sayac==i)
//                 {
//                     printf("%c",av[1][i]);
//                 }
//             }
//             else
//             {
//                 printf("%c",av[1][i]);
//             }
//             i++;
//             sayac=0;
//             j=0;
//         }
//         int k=0,l=0,sayac=0;
//         while(av[2][k])
//         {
//             if(k==0)
//             {
//                 while(av[1][l])
//                 {
                    
//                 }

//             }
            
//             k++;
//         }
//     }
//     else
//     {
//         printf("\n");
//     }

//     return 0;
// }
