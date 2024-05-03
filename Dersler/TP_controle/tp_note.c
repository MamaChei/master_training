#include <stdio.h>

int nb_pairs(int tab[], int taille);
void afficher_tab(int tab[], int taille);
void tri_tableau(int tab[], int taille);

int main(){
	int taille; /*initialisation de la variable de la taille*/
	//printf("Veuillez entrer la taille du tableau que vous voulez : ");
	printf("Combien d'entiers dans le tableau ? ");
	scanf("%d", &taille); /*affectation de la taille*/
	int tab[taille]; /*initialisation du tableau avec la taille affectée plus tôt*/
	//printf("Entrez %d entiers : ", taille);
	int i = 0;
	for(; i<taille; i++){
		scanf("%d", &tab[i]); /*affectation des valeurs dans les cases du tableau*/
	}
	int nb_pair = nb_pairs(tab, taille); /*initialisation et affectation de la quantité nombres pairs*/
	int nb_imp = taille - nb_pair;	/*initialisation et affectation de la quantité des nombres impairs à l'aide des nombres pairs*/
	//printf("Il y a %d nombres pairs et %d nombres impairs dans le tableau.\n", nb_pair, nb_imp);
	printf("%d nombres pairs et %d nombres impairs.\n", nb_pair, nb_imp);
	tri_tableau(tab, taille);
	for(i=0; i<taille; i++){
		printf("%d ", tab[i]);
	}
	printf("\n");
	printf("Tableau trie : pairs | impairs\n");
	for(i=0; i<taille; i++){
		if(tab[i] % 2 == 0){
			printf("%d ", tab[i]);
		}
	}
	printf("|");
	for(i=0; i<taille; i++){
		if(tab[i] % 2 != 0){
			printf("%d ", tab[i]);
		}
	}
	printf("\n");

	return 0;
}


int nb_pairs(int tab[], int taille){
	int i=0;
	int tai_pair=0; /*initialisation de la quantité de nombre pairs*/
	for(; i<taille; i++){
		if(tab[i]%2 == 0){ /*vérifie si le nombre est divisible par deux, donc s'il est pair*/
			tai_pair++; 
		}
	}
	return tai_pair;
}

void afficher_tab(int tab[], int taille){
	int i=0;
	for(; i<taille; i++){
		printf("%d ", tab[i]);
	}
	printf("\n");
}

void tri_tableau(int tab[], int taille){
	int i;
	int j;
	int tmp; /*initialisation de la variable temporelle*/
	/*boucle pour trier le tableau*/
	for(i=1; i < taille; i++){
		j=i;
			if(tab[i] % 2 == 0){
				tmp = tab[i];
				tab[i] = tab[i-1];
				tab[i-1] = tmp;
			}else if(tab[j-1] % 2 != 0){
				tmp = tab[taille - j-1];
				tab[taille - j-1] = tab[j-1];
				tab[j-1] = tmp;
				j--;
			}
		if((tab[i] % 2 == 0) && (tab[i-1] % 2 !=0)){
			tmp = tab[i];
			tab[i] = tab[i-1];
			tab[i-1] = tmp;
		}
		for(j=0; j<taille; j++){
			printf("%d ", tab[j]);
		}
		printf("\n");
	}
	/*for(i=1; i<taille; i++){
		if((tab[i] % 2 == 0) && (tab[i-1] % 2 !=0)){
			tmp = tab[i];
			tab[i] = tab[i-1];
			tab[i-1] = tmp;
		}
		for(j=0; j<taille; j++){
			printf("%d ", tab[j]);
		}
		printf("\n");
	}
	for(i=1; i<taille; i++){
		if((tab[i] % 2 == 0) && (tab[i-1] % 2 !=0)){
			tmp = tab[i];
			tab[i] = tab[i-1];
			tab[i-1] = tmp;
			
		}
		for(j=0; j<taille; j++){
			printf("%d ", tab[j]);
		}
		printf("\n");
	}*/
	afficher_tab(tab, taille);
}
