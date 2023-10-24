
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
#include<string.h>
/****/
/* Definition de types */

/****/
/* Definition de constantes */


/****/
/* Fonctions */

typedef struct Etudiant{
    char filiere[30];
    char prenom [30];
    char nom[30];
    int age;

}Etudiant;
/* Prototype de la fonction F1 */
/***************************************************************/
/* Son role            :                                       */
/*                                                             */
/***************************************************************/
/* precondition :                                              */
/* postcondition :                                             */
/***************************************************************/

void echange(Etudiant* premier, Etudiant* second);
/* programme principal */
int main(void) {
  /* declaration des variables et roles */
    Etudiant ali;
    Etudiant abdou;

    strcpy(abdou.filiere,"IMDS");
    strcpy(abdou.prenom,"abdou");
    strcpy(abdou.nom,"bedraoui");
    strcpy(ali.filiere,"GC");
    strcpy(ali.prenom,"ali");
    strcpy(ali.nom,"jsp");

    ali.age=19;
    abdou.age=20;

  /* Traitement 1*/
    printf("le prenom de ali est %s",ali.prenom);
  /* Traitement n */
    echange(&ali,&abdou);
  /* Affichage des resultats */

  return 0;
}
void echange(Etudiant* premier, Etudiant* second){
    int c;
    c = premier->age;
    premier->age = second->age;
    second->age = c;
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
