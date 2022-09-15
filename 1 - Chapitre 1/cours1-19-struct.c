#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum lyceeFR { MASSENA_NICE, VHUGO_BESANCON, MONTAIGNE_BORDEAUX, SAINTLOUIS_PARIS } ;
typedef enum lyceeFR lyceeFR ;

struct profilEleve {
   char nom[50] ;
   lyceeFR lycee ;
   double moyMath ;
   double moyPhy ;
   double moyInfo ;
   double moyFr ;
   double moyEng ;
   char comment[100] ;
 };
typedef struct profilEleve profilEleve ;


double moyGen (struct profilEleve eleve)
{
  return ((10*eleve.moyMath + 7*eleve.moyPhy + 7*eleve.moyInfo + 3*eleve.moyFr + 4*eleve.moyEng) / 31) ;
}


struct profilEleve inputProfil ()
{
  struct profilEleve eleve ;
  printf("Entrez votre nom: ") ;
  scanf("%50s", eleve.nom) ;
  printf("Entrez vos moyennes de Math, Physique, Informatique, Francais et Anglais, separees par des espaces: ") ;
  scanf("%lf %lf %lf %lf %lf"
	,&eleve.moyMath, &eleve.moyPhy, &eleve.moyInfo
	, &eleve.moyFr, &eleve.moyEng) ;
  return eleve ;
} ;





int main ()
{
    profilEleve eleve = inputProfil () ;
    printf("L'eleve %s a une moyenne generale de: %lf \n", eleve.nom, moyGen(eleve)) ;
}
