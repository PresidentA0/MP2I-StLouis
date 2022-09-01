#include <stdio.h>


int syracuse (int n)
{
    while (n != 1)
        if (n % 2 == 0)
            n = n/2 ;
        else
            n = 3*n+1 ;
    return n ;
}

int main ()
{
  int n ;
  printf("Entrez un entier: ") ;
  scanf("%d",&n) ;
  printf("syracuse(%d) = %d\n", n, syracuse(n)) ;
}
