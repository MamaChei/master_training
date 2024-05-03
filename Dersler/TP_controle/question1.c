#include <stdio.h>
#define MAX 200
int main(){

int i, tab[MAX]; int e = 0;

printf("combien d'element souhaitez vous entrer?\n");
scanf("%d", &e);

for (i = 0; i < e; i++){
	printf("Entrer nombre numéro %d : ", i);
	scanf("%d", &tab[i]);
	}

for (i = 0; i < e; i++){
	printf("nombre numéro %d : %d\n", i, tab[i]);
	}
	return 0;
	}

