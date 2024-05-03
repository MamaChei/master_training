#include <stdio.h>
int main()
{
int i, tab[1]; int e = 2;
/* saisie du tableau */
for(i = 0; i < e; i++){
printf("Entrer nombre numéro %d : ", i);
scanf("%d", &tab[i]);
}
/* affichage du tableau */
for(i = 0; i < e; i++){
printf("nombre numéro %d : %d\n", i, tab[i]);
}
return 0;
}

