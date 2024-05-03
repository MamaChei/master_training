# ifndef TICTACTOE
# define TICTACTOE
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include "myStack.h"
# include "colors.h"

char tableau[3][3];
void remplir_tableau();
int quelqun_gagne();
void afficher_tableau();
int placer_son_avis(char x_o, int ou, mystack *st);
int donner_son_avis(int quelle_joueur, mystack *);
int boucle_de_jeu(int);

# endif