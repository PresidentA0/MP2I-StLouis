#include <stdio.h>


int foo ()
{
    char buffer[8];
    char * ret;
    ret = buffer +24 ;
    (*ret) += 8 ;
    return 0 ;
}


int main ()
{
    int i = 26;
    foo() ;
    i = 34 ;
    printf("%d\n", i) ;
    return 0 ;
}
