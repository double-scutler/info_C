
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


/****/
/* Fonctions */

void echange(int* a, int* b);

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
    int a,b;
  /* Saisie des donnees */
    printf("entrer les valeurs de a et b");
    scanf("%d %d",&a,&b);
  /* Traitement 1*/
    echange(&a,&b);
  /* Traitement n */

  /* Affichage des resultats */
    printf("la nouvelle valeure de a est : %d \net\nla nouvelle valeure de b est : %d",a,b);
  return 0;
}
void echange(int* a, int* b){
    int c = *a;
    (*a)=*b;
    (*b)=c;
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
