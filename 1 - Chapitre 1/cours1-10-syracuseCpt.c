#include <stdio.h>

int syracuse (int n)
{
    int cpt = 0 ;
    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n = n/2 ;
        }
        else
        {
            n = 3*n+1 ;
        }
        cpt = cpt + 1 ;
    }    
    return cpt ;
}

int main ()
{
  int n ;
  printf("Entrez un entier: ") ;
  scanf("%d",&n) ;
  printf("syracuse(%d) = %d\n", n, syracuse(n)) ;
}
