#include <stdio.h>



int notTrivial (int n)
{
    int a = 0 ;
    int s = 1 ;
    int t = 1 ;
    while (s <= n)
    {
        a++ ;
        s = s + t + 2 ;
        t = t + 2 ;
    }
    int inv1 = t/2+1 ;
    int inv2 = t+1 ;
    int inv3 = inv2/2 ;
    printf("Ou est le furet ?");
    if (s != inv1 * inv1)
        printf("\nIl est passe par ici \n") ;
    if (s != inv2 * inv2 /4)
        printf("\nIl repassera par la \n") ;
    if (s != inv3 * inv3)
        printf("\nEst-il ici aussi ? \n") ;
    return a ;
}

int main ()
{
  int r = 1000000 ;
  for (int  i = 0; i < r; i++)
    notTrivial(i) ;
}
