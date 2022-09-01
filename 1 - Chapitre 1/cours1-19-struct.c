#include <stdio.h>
#include <stdlib.h>

enum lyceeFR { MASSENA_NICE, VHUGO_BESANCON, MONTAIGNE_BORDEAUX, SAINTLOUIS_PARIS } ;
typedef enum lyceeFR lyceeFR ;

struct profilEleve {
   char* nom ;
   lyceeFR lycee ;
   double moyMath ;
   double moyPhy ;
   double moyInfo ;
   double moyFr ;
   double moyEng ;
   char* comment ;
 };
typedef struct profilEleve profilEleve ;


double moyGen (struct profilEleve eleve)
{
  return ((10*eleve.moyMath + 7*eleve.moyPhy + 7*eleve.moyInfo + 3*eleve.moyFr + 4*eleve.moyEng) / 31) ;
}


struct profilEleve inputProfil ()
{
    printf("Entrez votre nom: ") ;
    char* nomEleve = malloc(sizeof(char)*50);
    scanf("%s", nomEleve) ;
    printf("\n") ;	
    printf("Entrez vos moyennes de Math, Physique, Informatique, Francais et Anglais, separees par des espaces: \n") ;
    double math, phys, info, fr, eng ;
    scanf("%lf %lf %lf %lf %lf",&math, &phys, &info, &fr, &eng) ;
    char comment[100] = "RAS" ;
    printf("\n") ;
    struct profilEleve eleve = 
      { nomEleve, SAINTLOUIS_PARIS, math, phys, info, fr, eng, comment } ;
    return eleve ;
} ;


int main ()
{
    profilEleve eleve = inputProfil () ;
    printf("L'eleve %s a une moyenne generale de: %lf \n", eleve.nom, moyGen(eleve)) ;
    free(eleve.nom) ;
}
