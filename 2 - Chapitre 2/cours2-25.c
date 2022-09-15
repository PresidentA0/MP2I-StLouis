#include <stdio.h>

int main ()
{
  char nom[10] ;
  scanf("%s", nom) ; // Pas de & ici: pourquoi ?
  printf("%s\n", nom) ;
}
