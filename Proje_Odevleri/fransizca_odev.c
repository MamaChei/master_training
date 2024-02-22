#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct date{
    int jour;
    char mois[20];
    int annee;

};

struct date Ferie[11];

void ferie_init();
int affiche_date();
struct date lire_date();
int compare_date();

int ft_strlen(char *m) {
    int i =0;
    for(;m[i];i++);
    return i;
}

void fill(char a[20], char *mois) {
    for (int i = 0; mois[i]; i++) {
        a[i] = mois[i];
    }
    a[ft_strlen(mois)] = '\0';
}

int init_ferie() {


    Ferie[0].jour=1;
    fill(Ferie[0].mois, "Janvier");

    printf("%s\n",Ferie[0].mois);
    /* Ferie[0].jour=1;Ferie[1].jour=1;Ferie[2].jour=1;Ferie[3].jour=8;Ferie[4].jour=9;Ferie[5].jour=20;
    Ferie[6].jour=14;Ferie[7].jour=15;Ferie[8].jour=1;Ferie[9].jour=11;Ferie[10].jour=25;
    
    Ferie[0].mois="Janvier";Ferie[1].mois[20]="Avril";Ferie[2].mois[20]="Mai";Ferie[3].mois[20]="Mai";
    Ferie[4].mois[20]="Mai";Ferie[5].mois[20]="Mai";Ferie[6].mois[20]="Juillet";Ferie[7].mois[20]="Aout";
    Ferie[8].mois[20]="Novembre";Ferie[9].mois[20]="Novembre";Ferie[10].mois[20]="Decembre";
    */
    return 1;
}

int main()
{
    init_ferie();
    struct date Date;
    
    struct date DateSaisie=lire_date(Date);
    if(affiche_date(DateSaisie)==0)
    {
        printf("Il n'y a pas un jour comme cela");
        return 0;
    }
    else
    {
        printf("La Date Saisie est: %d,%s,%d\n",DateSaisie.jour,DateSaisie.mois,DateSaisie.annee);
    }
    
    if(compare_date(DateSaisie)==1)
    {
        printf("%d,%s,%d est ferie",Date.jour,Date.mois,Date.annee);
    }
    else if(compare_date(DateSaisie)==0)
    {
        printf("%d,%s,%d n'est pas en 2024",Date.jour,Date.mois,Date.annee);
    }
    else
    {
        return 1;
    }
    
    
    return 0;
}


struct date lire_date(struct date Date)
{
    printf("Entrez une date sous la forme jour,mois,annee\n");
    scanf("%d,%s,%d",&Date.jour,&Date.mois,&Date.annee);
    return Date;
}

int affiche_date(struct date DateSaisie)
{
    if((DateSaisie.jour>31) || (strcmp(DateSaisie.mois,"Janvier")!=0 && strcmp(DateSaisie.mois,"Fevrier")!=0 && strcmp(DateSaisie.mois,"Mars")!=0
    && strcmp(DateSaisie.mois,"Avril")!=0 && strcmp(DateSaisie.mois,"Mai")!=0 && strcmp(DateSaisie.mois,"Juin")!=0 && strcmp(DateSaisie.mois,"Juillet")!=0
    && strcmp(DateSaisie.mois,"Aout")!=0 && strcmp(DateSaisie.mois,"Septembre")!=0 && strcmp(DateSaisie.mois,"Octombre")!=0 && strcmp(DateSaisie.mois,"Novembre")!=0 
    && strcmp(DateSaisie.mois,"Decembre")!=0))
    if((DateSaisie.jour>31) || (DateSaisie.jour<1))
        return 0;
    else if ((!strcmp(DateSaisie.mois,"Janvier") || !strcmp(DateSaisie.mois,"Mars") || )) // 31 ceken aylar sj
        return 1;
    else if () // 30 ceken aylar
    {
        if (jour <= 30)
            return 1;
        else
            return 0;
    }
    else if () // 29 28 subat
    {
        if (jour <= 29)
            return 1;
        else
            return 0;
    }
    else
    {    
        return 0;
    }
}

int compare_date(struct date Date)
{   
    
    if(Date.annee!=2024)
    {
        return 0;
    }
    for(int i=0;i<11;i++)
    {
        if(Date.jour==Ferie[i].jour && !strcmp(Date.mois,Ferie[i].mois))
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