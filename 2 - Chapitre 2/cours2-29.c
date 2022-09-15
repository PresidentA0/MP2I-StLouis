#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
  char* nomHeap = (char*)(malloc(sizeof(char)*10)) ;
  for (int i = 0; i < 30; i++)
      printf("%d ", (int)nomHeap[i]) ;
  printf("\n") ;
  strcpy(nomHeap,"halfonhalfonhalfonhalfon") ;
  printf("%s\n", nomHeap) ;  
  for (int i = 0; i < 20; i++)
      printf("%d ", (int)nomHeap[i]) ;
  printf("\n") ;
  strcpy(nomHeap,"halfonhalfon") ;
  printf("%s\n", nomHeap) ;  
  for (int i = 0; i < 20; i++)
      printf("%d ", (int)nomHeap[i]) ;
  printf("\n") ;
  nomHeap[12] = 'z' ;
  printf("%s\n", nomHeap) ;  
  for (int i = 0; i < 20; i++)
      printf("%d ", (int)nomHeap[i]) ;
  printf("\n") ;


}
