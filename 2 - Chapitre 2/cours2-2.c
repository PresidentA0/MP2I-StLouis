#include <stdbool.h>
#include <stdio.h>

int main ()
{
  bool choice = false ;
  long n ;
  if (choice)
    n = 6092551948 ;
  else
    n = 733456637 ;
  int* p = (int*)(n) ;
  *p = 12 ;
  printf("%d\n", *p) ;
}



/* SCRIPT BASH
   
for (( c=1; c <= 100; c++))
do
  ./a.out
done

 */

