#include <stdio.h>


int min (int x, int y){  if (x < y)  {    return x ;  }  else  {    return y ;  }}int main (){  int n,m ;  printf("Entrez deux entiers (sur la meme ligne, separes par un espace): ");  scanf("%d %d",&n,&m);  printf("min(%d,%d) = %d\n", n,m,min(n,m)) ;}
