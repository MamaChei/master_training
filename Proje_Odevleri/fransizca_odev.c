#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct date
{
    int jour;
    char *mois;
    int annee;
};

struct date Ferie[11];

void ferie_init();
int affiche_date();
struct date lire_date();
int compare_date();

int ft_strlen(char *m)
{
    int i = 0;
    for (; m[i]; i++)
        ;
    return i;
}

char * ft_strdup(char *str) {
    char *ret = (char *) malloc(ft_strlen(str) * sizeof(char));
    int i=0;
    while(str[i])
    {
        ret[i]=str[i];
        i++;
    }
    ret[i]='\0';


    return ret;
}

int init_ferie()
{

    
    Ferie[0].mois = ft_strdup("Janvier");
    Ferie[1].mois = ft_strdup( "Avril");
    Ferie[2].mois = ft_strdup( "Mai");
    Ferie[3].mois = ft_strdup( "Mai");
    Ferie[4].mois = ft_strdup( "Mai");
    Ferie[5].mois = ft_strdup( "Mai");
    Ferie[6].mois = ft_strdup( "Juillet");
    Ferie[7].mois = ft_strdup( "Aout");
    Ferie[8].mois = ft_strdup( "Novembre");
    Ferie[9].mois = ft_strdup( "Novembre");
    Ferie[10].mois = ft_strdup( "Decembre");
    
    Ferie[0].jour = 1;
    Ferie[1].jour = 1;
    Ferie[2].jour = 1;
    Ferie[3].jour = 8;
    Ferie[4].jour = 9;
    Ferie[5].jour = 20;
    Ferie[6].jour = 14;
    Ferie[7].jour = 15;
    Ferie[8].jour = 1;
    Ferie[9].jour = 11;
    Ferie[10].jour = 25;

    return 1;
}

void free_ferie() {
    for (int i = 0; i < 11; i++) {
        free(Ferie[i].mois);
    }
}

int main()
{
    init_ferie();
    struct date Date;

    struct date DateSaisie = lire_date(Date);
    if (affiche_date(DateSaisie) == 0)
    {
        printf("Il n'y a pas un jour comme cela");
        return 0;
    }
    else
    {
        printf("La Date Saisie est: %d,%s,%d\n", DateSaisie.jour, DateSaisie.mois, DateSaisie.annee);
    }

    if (compare_date(DateSaisie) == 1)
    {
        printf("%d,%s,%d est ferie", DateSaisie.jour, DateSaisie.mois, DateSaisie.annee);
    }
    else if (compare_date(DateSaisie) == 0)
    {
        printf("%d,%s,%d n'est pas en 2024", DateSaisie.jour, DateSaisie.mois, DateSaisie.annee);
    }
    else
    {
        printf("%d,%s,%d, n'est pas une feriee\n",DateSaisie.jour, DateSaisie.mois, DateSaisie.annee);

    }

    free_ferie();
    return 0;
}

struct date lire_date(struct date Date)
{
    printf("Entrez une date sous la forme jour,mois,annee\n");
    scanf("%d,%s", &Date.jour, &Date.mois);
    for(int i = 0; Date.mois[i]; i++) {
        if (Date.mois[i] == ',')
        {
            Date.mois[i] = '\0';
            i++;
            Date.annee = atoi(&Date.mois[i]);
            break;
        }
    }
    return Date;
}

int affiche_date(struct date DateSaisie)
{
    if ((DateSaisie.jour > 31) || (DateSaisie.jour < 1))
    {
        printf("%d\n", __LINE__);
        return 0;
    }
    else if ((!strcmp(DateSaisie.mois, "Janvier") || !strcmp(DateSaisie.mois, "Mars") || !strcmp(DateSaisie.mois, "Mai") || !strcmp(DateSaisie.mois, "Juillet") ||
              !strcmp(DateSaisie.mois, "Aout") || !strcmp(DateSaisie.mois, "Octobre") || !strcmp(DateSaisie.mois, "Decembre"))) // 31 ceken aylar sj
        return 1;
    else if (!strcmp(DateSaisie.mois, "Septembre") || !strcmp(DateSaisie.mois, "Avril") || !strcmp(DateSaisie.mois, "Juin") || !strcmp(DateSaisie.mois, "Novembre")) // 30 ceken aylar
    {
        if (DateSaisie.jour <= 30)
            return 1;
        else
        {
            printf("%d\n", __LINE__);
            return 0;
        }
    }
    else if (!strcmp(DateSaisie.mois, "Fevrier")) // 29 28 subat
    {
        if (DateSaisie.jour <= 29)
            return 1;
        else
        {
            printf("%d", __LINE__);
            return 0;
        }
    }
    else
    {
        printf("%s\n", DateSaisie.mois);
        printf("%d\n",DateSaisie.annee);
        printf("%d\n", __LINE__);
        return 0;
    }
}

int compare_date(struct date Date)
{

    if (Date.annee != 2024)
    {
        printf("%d\n", __LINE__);
        return 0;
    }
    for (int i = 0; i < 11; i++)
    {
        if (Date.jour == Ferie[i].jour && !strcmp(Date.mois, Ferie[i].mois))
        {
            return 1;
        }
        else
        {
            return 2;
        }
    }
    return 0;
}