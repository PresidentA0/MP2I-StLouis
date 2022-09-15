#include <stdio.h>
#include <stdlib.h>

int main ()
{
  char* nom = (char*)(malloc(sizeof(char)*10)) ;
  scanf("%s", nom) ; // Pas de & ici: pourquoi ?
  printf("%s\n", nom) ;
}
