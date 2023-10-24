
/***************************************************************/
/* Auteur : prenom nom                                         */
/* Date   : Octobre 2023                                       */
/* Dept   : IMDS3A - Polytech                                  */
/* TP no.. - Langage C - Exercice no ..                        */
/***************************************************************/
/* Role du programme                                           */
/*                                                             */
/***************************************************************/

/* Fichiers entete necessaires */
#include <stdio.h>

/****/
/* Definition de types */

/****/
/* Definition de constantes */
#define N 100

/****/
/* Fonctions */
void lire_tab(int* tab,int n);
void ecrire_tab(int* tab,int n);
void somme_tab(int* tab, int n,int* somme);

/* Prototype de la fonction F1 */
/***************************************************************/
/* Son role            :                                       */
/*                                                             */
/***************************************************************/
/* precondition :                                              */
/* postcondition :                                             */
/***************************************************************/


/* programme principal */
int main(void) {
  /* declaration des variables et roles */
    int tab[N];
    int n,somme=0;

  /* Saisie des donnees */
    printf("rentrer la dimension du tableau ( maximum %d)\n",N);
    scanf("%d",&n);

    printf("%d\n",tab);
    printf("%d\n",tab[1]);

    lire_tab(tab,n);
    ecrire_tab(tab,n);
    somme_tab(tab,n,&somme);

  /* Traitement 1*/

  /* Traitement n */

  /* Affichage des resultats */
    printf("la somme des elements du tableau est : %d",somme);
  return 0;
}
void lire_tab(int* tab,int n){
    int i;
    for(i=0;i<n;i++){
        printf("entrer la valeur %d de tableau.\n",i);
        scanf("%d",&tab[i]);
    }
}
void ecrire_tab(int* tab,int n){
    int i=0;
    for(i=0;i<n;i++){
        printf("%d\n",tab[i]);
    }
}
void somme_tab(int* tab, int n,int* somme){
    int i=0;
    for(i=0;i<n;i++){
        (*somme)+=tab[i];
    }
}


/***************************************************************/
/* Declaration de la fonction F1 */
/***************************************************************/
/* Son role  :                                                 */
/*                                                             */
/***************************************************************/
/* precondition :                                              */
/* postcondition :                                             */
/***************************************************************/
