#include <stdio.h>

int sumTab (int longueur, int tab[])
{
    int sum = 0 ;
    for (int i = 0; i < longueur; i++)
        sum = sum + tab[i] ;
    return(sum) ;
}


int main ()
{
  int tab1[] = { 1,2,3,4,5,6,7,8,9,10 } ;
  int tab2[15] = { 1,2,3,4,5,6,7,8,9,10 } ;
  printf("Somme des elts de tab1: %d\n", sumTab(15,tab1)) ;
  printf("Somme des elts de tab2: %d\n", sumTab(15,tab2)) ;
    
}
    
