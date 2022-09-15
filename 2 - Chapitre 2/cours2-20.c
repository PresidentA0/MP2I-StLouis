

// STACKOVERFLOW

int stackFilling (int n)
{
  // printf("%d \n", n) ;
  int m = stackFilling (n+1) ;
  // printf("%d \n", m) ;
  return m ;
}


int main ()
{
  stackFilling(0) ;
}


// Ce qui est surprenant c'est que cela ne fonctionne plus si j'enleve une des lignes !
// ****************
