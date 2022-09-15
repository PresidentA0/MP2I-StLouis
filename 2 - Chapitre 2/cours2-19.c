#include <stdio.h>
#include <stdlib.h>



struct montype { int champ1; int champ2 ;} ;
typedef struct montype montype ;


void stackDestroyer ()
{
    int a = 12 ;
    int b = 12 ;
    int c = 12 ;
    int d = 12 ;
    int e = 12 ;
    printf("%lu %lu %lu %lu %lu\n", (long)&a, (long)&b, (long)&c, (long)&d, (long)&e) ;
}

montype init (int n, int m)
{
  montype mavar;
  mavar.champ1 = n;
  mavar.champ2 = m;
  printf("%lu %lu %lu\n",(long)&mavar, (long)&mavar.champ1, (long)&mavar.champ2) ;
  return mavar;
}

int main()
{
  montype monobjet = init (42,12) ;
  stackDestroyer () ;
  printf("%lu %d %d\n", (long)&monobjet, monobjet.champ1, monobjet.champ2) ;
}

