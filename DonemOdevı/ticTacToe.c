#include "ticTacToe.h"


void remplir_tableau() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            tableau[i][j] = '_';
        }
    }
}

int quelqun_gagne() {
    if(
        (tableau[0][0] == 'O' && tableau[0][1] == 'O' && tableau[0][2] == 'O') || 
        (tableau[1][0] == 'O' && tableau[1][1] == 'O' && tableau[1][2] == 'O') || 
        (tableau[2][0] == 'O' && tableau[2][1] == 'O' && tableau[2][2] == 'O') || 
        (tableau[0][0] == 'O' && tableau[1][0] == 'O' && tableau[2][0] == 'O') || 
        (tableau[0][1] == 'O' && tableau[1][1] == 'O' && tableau[2][1] == 'O') || 
        (tableau[0][2] == 'O' && tableau[1][2] == 'O' && tableau[2][2] == 'O') || 
        (tableau[0][0] == 'O' && tableau[1][1] == 'O' && tableau[2][2] == 'O') || 
        (tableau[2][0] == 'O' && tableau[1][1] == 'O' && tableau[0][2] == 'O'))
    {
        return 1;
    }
    else if(
        (tableau[0][0] == 'X' && tableau[0][1] == 'X' && tableau[0][2] == 'X') || 
        (tableau[1][0] == 'X' && tableau[1][1] == 'X' && tableau[1][2] == 'X') || 
        (tableau[2][0] == 'X' && tableau[2][1] == 'X' && tableau[2][2] == 'X') || 
        (tableau[0][0] == 'X' && tableau[1][0] == 'X' && tableau[2][0] == 'X') || 
        (tableau[0][1] == 'X' && tableau[1][1] == 'X' && tableau[2][1] == 'X') || 
        (tableau[0][2] == 'X' && tableau[1][2] == 'X' && tableau[2][2] == 'X') || 
        (tableau[0][0] == 'X' && tableau[1][1] == 'X' && tableau[2][2] == 'X') || 
        (tableau[2][0] == 'X' && tableau[1][1] == 'X' && tableau[0][2] == 'X'))
    {
        return 2;
    }
    return 0;
}

void afficher_tableau() {
    for (int i = 0; i < 3; i++) {
        printf("%s-------------------%s\n",RED, CRESET);
        printf("%s   | %c | %c | %c |%s\n",RED, tableau[i][0], tableau[i][1], tableau[i][2], CRESET);
    }
    printf("%s-------------------%s\n",RED, CRESET);
}

int placer_son_avis(char x_o, int ou, mystack *st) {
    ou-=1;
    int i = ou/3;
    int j = ou%3;
    if (tableau[i][j] != '_')
        return 1;
    else {
        push(ou, st);
        tableau[i][j] = x_o;
    }
    return 0;
}

int donner_son_avis(int quelle_joueur, mystack *st) {
    afficher_tableau();
    (void)quelle_joueur;
    int quelle_carre;
    printf("Donner une nombre entre 1-9\n");
    printf("Clicker 0 pour replacer.\n");
    fflush(stdin);
    scanf("%d", &quelle_carre);
    printf("\n%c\n", quelle_carre);

    if (quelle_carre >= 0 && quelle_carre <= 9) {
        if (quelle_carre == 0) {
            printf("1 move is remouved\n");
            int remouve = pop(st);
            if (remouve != -1) {
                tableau[(int)remouve/3][remouve%3] = '_';
            }

        }
        else {
            char written;
            if (quelle_joueur % 2 == 0)
                written = 'X';
            else
                written = 'O';
            if (placer_son_avis(written, quelle_carre, st))
                donner_son_avis(quelle_joueur, st);
        }
    }
    else {
        donner_son_avis(quelle_joueur, st);
    }
    return 0;
}

int boucle_de_jeu(int enemies) {
    (void)enemies;
    printf("%sLe jeux commence!%s\n", BHYEL,CRESET);
    mystack *stac = (mystack *)malloc(sizeof(mystack));
    create_stack(stac);
    remplir_tableau();
    int players = 0;
    while(1) {
        donner_son_avis(players++, stac);
        if (quelqun_gagne() == 1)
        {
            printf("%sO a gagne.%s\n", BHGRN,CRESET);
            exit(1);
        }

        else if (quelqun_gagne() == 2) {
            printf("%sX a gagne.%s\n", BHGRN,CRESET);
            exit(1);
        }

        if (is_full(stac)) {
            printf("%sMatch nul.%s\n", BHCYN,CRESET);
            exit(1);
        }
    }
    return 0;
}