#include <stdio.h>
#include <assert.h>
#include <math.h>
#include <stdlib.h>

// Mauvaise pratique:

int intSqrt (double x)
    // x est positif.
{
    return ((int)(sqrt(x))) ;
}


int main ()
{
  double x ;
  printf("Entrez un flottant positif: ");
  scanf("%lf",&x) ;
  printf("La racine carree entiere de %lf est %d\n",x,intSqrt(x)) ;
  /*
  printf("La racine carree entiere de %lf est: %d\n",37.56,intSqrt(37.56)) ;
  printf("La racine carree entiere de %lf est: %d\n",-1.0, intSqrt(-1)) ;
  printf("\n\nExplication: \n") ;
  printf("La racine carree de %lf est: %lf\n",-1.0, sqrt(-1)) ;
  printf("La conversion en entier de -nan donne: %d\n",(int)(sqrt(-1))) ;
  */
}
