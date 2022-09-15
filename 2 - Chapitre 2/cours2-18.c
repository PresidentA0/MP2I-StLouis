#include <stdio.h>
#include <stdlib.h>

int* initTableau (int* longueur) 
{
    printf("Combien de nombres allez-vous entrer ? ") ;
    int n ;
    scanf("%d",&n) ;
    printf("Entrez %d nombres, un par ligne.\n",n) ;
    // Conversion obligatoire ici ?
    int* tab = (malloc(sizeof(int)*n)) ; 
    for (int i = 0; i < n; i++)
        scanf("%d", &tab[i]) ;
    *longueur = n ; // Retour multiple
    return tab ;
}


void traitementTableau (int longueur, int tab[longueur])
{
    for (int i = 0; i < longueur; i++)
        tab[i] = 2*tab[i] ;
}


int main ()
{
    int longueur ;
    int* tab = initTableau(&longueur) ;
    traitementTableau(longueur, tab) ;
    printf("tab = ") ;
    for (int i = 0; i < longueur; i++)
        printf("%d ", tab[i]) ;
    printf("\n") ;
    // LIGNE IMPORTANTE:
    free(tab) ;
}
