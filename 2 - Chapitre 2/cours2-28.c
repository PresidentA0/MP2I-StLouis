#include <stdio.h>
#include <stdlib.h>

int main ()
{
  char nomStack[10] ;
  scanf("%9s",nomStack) ;
  printf("%s\n", nomStack) ;
  char* nomHeap = (char*)(malloc(sizeof(char)*10)) ;
  scanf("%9s", nomHeap) ;
  printf("%s\n", nomHeap) ;
}
