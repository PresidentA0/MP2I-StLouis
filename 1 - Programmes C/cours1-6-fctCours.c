// On commence par charger les librairies nécessaires.
// Dans le doute incluez celles ci:
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>
#include <stddef.h>

// Copier ici la fonction du cours
int fctCours (int n)
{
  // coller le code de la fonction ici
  return (n+1) ;
}

// Fonction main:
int main ()
{
    int n ;
    printf("Entrez un argument: ") ;
    scanf("%d",&n) ;
    printf("\nfctCours(%d) = %d\n",n,fctCours(n)) ;
}
