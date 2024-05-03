# include "ticTacToe.h"

// Contre votre amis ou contre l'ordinateur
int main(int ac, char **av) {

    int enemis = 0;
    if (ac == 2 && av[1][0] == '1') {
        printf("Vous jouez contre l'ordinateur\n");
        enemis = 1;
    }
    else {
        printf("Vous jouez contre votre amis\n");
    }

    boucle_de_jeu(enemis);
    return 1;
}