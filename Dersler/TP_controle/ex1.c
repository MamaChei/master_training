#include <stdio.h>

#define TAILLE_MAX 32

int nb_pair(int tab[], int nb_max);

int main()
{
	int tab[TAILLE_MAX];
	int taille = 0;
	int i;
	int nbPair = 0, nbImpair = 0;
	
	while (1) {
		printf("Combien d'entiers dans le tableau ? ");
		scanf(" %d", &taille);
		if (taille > 0 && taille < TAILLE_MAX) {
			break;
		}
	}
	for (i=0; i < taille; i++) {
		scanf("%d", &tab[i]);
	}
	
	nbPair = nb_pair(tab, taille);
	nbImpair = taille - nbPair;
	
	printf("%d nombres pairs et %d nombres impairs\n", nbPair, nbImpair);
	
	int j=0;
	int temp;
	int nb2 = 0;
	for (i=taille-1; nb2++ < nbPair; i = i-1) {
		if (tab[j]%2==0) {
			j++;
		}
		if (tab[i]%2!=0) {
			i--;
		}
		if (tab[i]%2==0) {
			temp = tab[j];
			tab[j] = tab[i];
			tab[i] = temp;
			nb2++;
			for (int k = 0; k < taille; k++) {
			printf("%d ", tab[k]);
			}
		printf("\n");
		}
		j++;

		
	}

	printf("Tableau trie : Pairs | impairs\n");
	for (i = 0; i < nbPair; i++) {
		printf("%d ", tab[i]);
	}
	printf("| ");
	for (; i < taille; i++) {
		printf("%d ", tab[i]);
	}
	printf("\n");
	
	return 0;
}

int nb_pair(int tab[], int nb_max)
{
	int nbPair = 0;
	int i;
	
	for (i = 0; i<nb_max; i++) {
		if (tab[i]%2==0) {
			nbPair++;
		}
	}
	return nbPair;
}


