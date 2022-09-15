#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>



void printBool (bool b)
{
    b? printf("true "):printf("false ") ; // Syntaxe hors programme
}


void printAdd (char* name, void* p)
{
    printf("Adresse de %s: %p %ld\n", name, p, (long)(p)) ;
}


int main ()
{
  // On déclare 5 variables de type CHAR
  char a ; 
  char b ;
  char c ; 
  char d ; 
  char e ;
  
  // On affiche les adresses: &a = l'adresse de la variable a.
  printAdd("a", &a) ;
  printAdd("b", &b) ;
  printAdd("c", &c) ;
  printAdd("d", &d) ;
  printAdd("e", &e) ;
  
  
  // On constate que les adresses sont côte à côte:
  printf("\n&b == &a + 1: ") ;
  printBool(&b == &a + 1); 
  printf("\n&c == &b + 1: ") ;
  printBool(&c == &b + 1) ;
  printf("\n&d == &c + 1: ") ;
  printBool(&d == &c + 1) ;
  printf("\n&e == &d + 1: ") ;
  printBool(&e == &d + 1) ;
  printf("\n") ;
}
