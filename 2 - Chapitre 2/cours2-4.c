#include <stdio.h>



/*
int main ()
{
    int a = 12 ;
    int tab[a] ;
    printf("%lu %lu \n", &a, tab) ;	  
    for (int i = 0; i < a; i++)
      {
	int b = i ;
	tab[i] = b ;
	printf("%lu %lu \n", &i, &b) ;
      }
    printf("%d\n",tab[a-1]) ;
    // printf("%p %p %p\n", &a, &b, tab) ;
    return 0 ;
}
*/

/*
void f (int n)
{
  int tab[10] = { 0,1,2,3,4,n-2,6,7,8,9 } ;
  int a = 10 ;
  printf("%d \n", tab[a]) ;
  printf("%lu %lu %lu %lu \n", &n, tab, &tab[10], &a) ;
}

int main ()
{
  f(31) ;
}
*/

void printAdd (char* name, void* p)
{
    printf("Adresse de %s: %p %ld\n", name, p, (long)(p)) ;
}

int main ()
{
  int a = 4 ;
  int b = -1 ;
  int aa = 26 ;
  int bb = 27 ;
  int tab[4] = { 121,122,123,124 } ;
  int tab2[4] = { 212,213,214,215 } ;
  int c = 12 ;
  printf("tab[4] = %d \n", tab[a]) ;
  printf("tab[-1] = %d \n", tab[b]) ;
  printf("tab2[4] = %d \n", tab2[a]) ;
  printf("tab2[-1] = %d \n", tab2[b]) ;  
  // printf("%lu %lu %lu \n", &a, tab, &tab[10]) ;
  printf("Explication: \n") ;
  printAdd("tab[3]",&tab[3]) ;
  printAdd("tab[2]",&tab[2]) ;
  printAdd("tab[1]",&tab[1]) ;
  printAdd("tab[0]",&tab[0]) ;
  printAdd("tab2[3]",&tab2[3]) ;
  printAdd("tab2[2]",&tab2[2]) ;
  printAdd("tab2[1]",&tab2[1]) ;
  printAdd("tab2[0]",&tab2[0]) ;
  printAdd("a",&a) ;
  printAdd("b",&b) ;
  printAdd("aa",&aa) ;
  printAdd("bb",&bb) ;
  printAdd("c",&c) ;
   
 
 
 



  

 
}



/*
int main ()
{
  int b = 2 ;
  int tab[12] ;
  tab[5] = b ;
  int a = tab[5]+3 ;
  // int c = 12 ;
  printf("%d\n",tab[12]) ;
  printf("Adresse de a: %lu\n", &a) ;
  printf("Asresse de tab: %lu\n", tab) ;
  printf("Adresse de tab[11]: %lu\n", &tab[11]) ;
  printf("Adresse de b: %lu\n", &b) ;
  printf("Adresse de tab[12]: %lu\n", &tab[12]) ;
}
*/
// Haha trop drole on accede a la variable a.
