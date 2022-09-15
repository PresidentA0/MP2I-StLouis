int main ()
{
  int entier1 = 3;
  int entier2 = 5;
  int entier3 = 8;
  int* pointeur1 = &entier1;
  int* pointeur2 = &entier2;
  int* pointeur3 = &entier3;
  pointeur1 = pointeur3;
  *pointeur3 = 10;
  entier2 = *pointeur1 + 7;
}
