#include <stdio.h>
#include <assert.h>

void triangle (int a, int b, int c)
{
    assert(a >= 0 && b >= 0 && c >= 0) ;
    if (a + b < c || a + c < b || b + c < a)
        printf("Impossible: un triangle verifie l'inegalite triangulaire. \n") ;
    else if (a == 0 && b == 0 && c == 0)
        printf("C'est un point.\n") ;
    else
    {
        int nbEgalite = 0 ;
        if (a == b)
            nbEgalite++ ;
        if (a == c)
            nbEgalite++ ;
        if (b == c)
            nbEgalite++ ;
        if (nbEgalite == 0)
        {
            if (a + b == c || a + c == b || b + c == a)
                printf("C'est un triangle plat.\n") ;
            else
                printf("C'est un triangle scalene. \n") ;
        }
        else if (nbEgalite == 1)
        {
            if (a + b == c || a + c == b || b + c == a)
                printf("C'est un triangle plat isocele.\n") ;
            else
                printf("C'est un triangle isocele. \n") ;
        }
        else
            printf("C'est un triangle equilateral. \n") ;
    }
}

int main ()
{
  int a,b,c ;
  printf("Entrez 3 entiers positifs, separes par des espaces: ") ;
  scanf("%d %d %d", &a, &b, &c);
  triangle(a,b,c) ;
}
