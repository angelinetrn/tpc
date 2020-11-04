#include <stdio.h>

int main() {

/* Ceci est un Commentaire */

/* Les Variables */

    int VariableNormale;
    float VariableVirgule;

    VariableNormale = 2;
    VariableVirgule = 3.5;
    VariableNormale ++; /* Ajoute 1 à Variable Normale (incrémentation)*/ 

/* Les printf : */
/* Mettre un \n pour retour à la ligne */

    printf("Ceci est un texte\n");
    /* Texte avec variable : */
    printf("%d est ma variable normale\n",VariableNormale);
    printf("%f est ma variable à virgule\n",VariableVirgule);

/* Les scanf : */
    printf("Nouvelle variable normale :");
    scanf("%d", &VariableNormale);
    printf("Nouvelle variable à virgule :");
    scanf("%f", &VariableVirgule);

    printf("\n%d est ma nouvelle variable normale\n",VariableNormale);
    printf("%f est ma nouvelle variable à virgule\n",VariableVirgule);

/* Les conditions : */

    if ( VariableNormale == 0 ) 
    {
        printf("La variable normale est égal à 0");
    }

    else
    {
        printf("La variable normale n'est pas égal à 0");
    }

/* Les boucles : */

    while ( VariableNormale != 0 )
    {
        printf("\nAffiche ce message tant que VariableNormale n'est pas égal à 0 ");
        printf("\nNouvelle variable normale :");
        scanf("%d", &VariableNormale);
    }
        printf("\nCool, VariableNormale est enfin égale à 0");

    int compteur;
    compteur = 0;
    for (compteur = 0 ; compteur < 10 ; compteur++)
    {
        printf("\nJ'affiche ce message 10 fois !\n");
    }


/* Fin du programme, ne pas toucher */
    return 0;   
}