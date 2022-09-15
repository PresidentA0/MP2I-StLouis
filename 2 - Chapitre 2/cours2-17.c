#include <stdio.h>
#include <stdlib.h>


// MEMORY LEAK:


long fact(n)
{
  return(n*fact(n-1)) ;
}

int main ()
{
  long n ;
  scanf("%ld",&n) ;
  // int f = fact(n) ;
  // printf("%d\n",f) ;
  int* p ;
  for (int i = 0; i < n; i++)
    {
    p = malloc(sizeof(int) * n) ;
    printf("%d %d %ld\n",p[n-1],i,n) ;
    }
}

// Malloc: cannot allocate region
