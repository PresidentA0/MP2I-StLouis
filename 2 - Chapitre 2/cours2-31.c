#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>



// Instructions du robot, ne pas modifier.
int nbDisques ;
int _cpt ;

struct cell { int head ; struct cell* tail ; } ;
typedef struct cell cell ;
cell* pillier[4] ;


void initPilliers()
{
    pillier[1] = NULL ;
    pillier[2] = NULL ;
    pillier[3] = NULL ;
    cell* tmp ;
    for (int i = nbDisques; i > 0; i--)
    {
        tmp = malloc(sizeof(cell)) ;
        tmp->head = i ;
        tmp->tail = pillier[1] ;
        pillier[1] = tmp ;
    }
}


void deplacer(int source,int dest)
{
    _cpt++ ;
    if (pillier[source] == NULL)
    {
        printf("Le robot tente de soulever le sol et s'arrache les bras ...\n") ;
        assert(false) ;
    }
    cell* tmp = pillier[source] ;
    pillier[source] = tmp->tail ;
    tmp->tail = pillier[dest] ;
    if (pillier[dest] != NULL && tmp->head > pillier[dest]->head)
    {
        printf("Le disque %d est trop petit pour maintenir le bloc %d, ce dernier se brise sous son poids ...\n"
        ,pillier[dest]->head,tmp->head) ;
        assert(false) ;
    }
    printf("Le robot déplace le disque %d du pillier %d au pillier %d.\n", tmp->head, source, dest) ;
    pillier[dest] = tmp ;
}

void checkEnd()
{
    int size = 1 ;
    cell* tmp = pillier[3] ;
    while (tmp != NULL)
    {
        if (tmp->head != size)
        {
            printf("Il manque un disque ! C'est un échec. \n") ;
            assert(false) ;
        }
        tmp = tmp->tail ;
        size++ ;
    }
    if (size != nbDisques+1)
    {
        printf("Il manque des disques ! C'est un échec. \n");
        assert(false) ;
    }
}



void hanoi(int source, int destination,int nb)
{
    if (nb == 1)
    {
        deplacer(source,destination) ;
    }
    else
    {
        hanoi(source,6-destination-source,nb-1) ;
        deplacer(source,destination) ;
        hanoi(6-destination-source,destination,nb-1) ;
    }
}
    
void instructions ()
{
    // Compléter ici.
    // Le taille de la salle est accessible avec la variable "taille"
    hanoi(1,3,nbDisques) ;
}
    

// Fonction main, ne pas modifier.

int main ()
{
    printf("Indiquez le nombre de disques: ") ;
    // scanf("%d",&nbDisques) ;
    nbDisques = 6 ;
    assert(nbDisques > 0) ;
    printf("\n") ;
    initPilliers() ;
    instructions() ;
    checkEnd ();
    printf("Bravo, l'opération est un succès !\n") ;
    printf("Vous avez effectué %d déplacements: ",_cpt) ;
    if (_cpt == (1 << nbDisques)-1)
        printf("c'est optimal !\n") ;
    else
        printf("on peut faire mieux ;)\n") ;
}
