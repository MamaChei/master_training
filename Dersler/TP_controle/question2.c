
#include <stdio.h>
#define MAX 200
int i, tab[MAX]; int e = 0;
int entier_pair(int tab[e], int e;);
int main(){

printf("combien d'element souhaitez vous entrer?\n");
scanf("%d", &e);

	for (i = 0; i < e; i++){
	printf("Entrer nombre numéro %d : ", i);
	scanf("%d", &tab[i]);
	}
	for (i = 0; i < e; i++){
	printf("nombre numéro %d : %d\n", i, tab[i]);
	}
entier_pair(tab[MAX]);
	return 0;
	}
int entier_pair(int tab[MAX], int e;){
int a = 0;
	for(i = 0; i < e; i++){	
	if(tab[i] % 2 == 0){
	a++;
	}
	}
	{
	printf("le nombre d'entiers pairs:%d\n", a);
	}
	return 0;
}


