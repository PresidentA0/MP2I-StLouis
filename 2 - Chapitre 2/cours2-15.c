#include <stdio.h>


int* initTableau () 
{
    int tab[6] ;
    printf("Entrez 6 entiers: ") ;
    for (int i = 0; i < 6; i++)
        scanf("%d", &tab[i]) ;
    // tab[i] = i ;
    return tab ;
}


void traitementTableau (int longueur, int tab[longueur])
{
    int a = 27 ;
    int b = 37 ;
    int c = 47 ;
    int d = 57 ;
    for (int i = 0; i < longueur; i++)
        tab[i] = 2*tab[i] ;
}


int main ()
{
    int* tab = initTableau() ;
    traitementTableau(6, tab) ;
    printf("tab = %d %d %d %d %d %d\n", tab[0],tab[1],tab[2],tab[3],tab[4],tab[5]) ;
}
