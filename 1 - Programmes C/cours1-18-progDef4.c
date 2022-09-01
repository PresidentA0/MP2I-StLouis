#include <stdio.h>
#include <assert.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int maxIndexTab (int longueur, int t[longueur])
{
    assert(longueur > 0) ;
    int max = t[0];
    int maxIndex = 0 ;
    for (int i = 1; i < longueur; i++)
    {
        if (t[i] > max)
        {
            max = t[i] ;
            maxIndex = i ;
        }
    }
    assert(0 <= maxIndex && maxIndex < longueur) ;
    return maxIndex ;
}


void initTabRand(int t[],int longueur)
{
    for (int i = 0; i < longueur; i++)
        t[i] = rand() ;
}

int main ()
{
    srand(time(NULL));   // Initialise le generateur de nombres pseudo-aleatoires (hors programme).
    int t[100] ;
    initTabRand(t,100) ; // remplit le tableau de valeurs aleatoires
    int maxIndex = maxIndexTab(100,t) ;
    printf("Le plus grand elt du tableau se situe a l'indice %d et vaut %d\n", maxIndex,t[maxIndex]) ;
}   
