# ifndef TICTACTOE
# define TICTACTOE
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include "myStack.h"

// bir grid olusturmak lazim.
// gridin icine sayilari koymak lazim.
// yenme logini yazmak lazim.
// 2 ayar olur arkadasa karsi oynamak icin ve bota karsi.
// bota karsi.


void afficher_tableau();
int donner_son_avis(int quelle_joueur, mystack *);
int quelqun_gagne();
int boucle_de_jeu();




#endif