#include <stdio.h>
#include <stdlib.h>

int main ()
{
  int* p ;
  for (int i = 0; i < 10; i++)
    {
      p = (int*)(malloc(sizeof(int))) ;
      printf("Adresse de p: %p   %lu ;   Valeur de p: %d \n", p, (long)(p), *p) ; 
      // Attention: ce code est volontairement incomplet. Ne pas s'en inspirer.
    }
}
