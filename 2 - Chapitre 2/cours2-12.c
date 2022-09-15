#include <stdio.h>



void f (int a, int* p, int* q, int* r)
{
    int x = a+1 ;
    int y = a+2 ;
    int z = a+3 ;
    // Simulation de return:
    *p = x ;
    *q = y ;
    *r = z ;
}


int main ()
{
    int a = 12 ;
    int p ;
    int q ;
    int r ;
    f(a,&p,&q,&r) ;
    printf("%d %d %d\n",p,q,r) ;
}
