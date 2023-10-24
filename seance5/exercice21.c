
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
#include <string.h>
/****/
/* Definition de types */

/****/
/* Definition de constantes */
#define MAX 100

/****/
/* Fonctions */

void NbMajusculesMinuscules(char* s, int t, int* nbMaj, int* nbMin);
/* Prototype de la fonction F1 */
/***************************************************************/
/* Son role            :                                       */
/*                                                             */
/***************************************************************/
/* precondition :  s estt une chaine de caractere et t est bien un nombre positive representant le nombre de caracteres                                            */
/* postcondition : nbMaj contient le nombre de majucules et nbMin contient le nombre de miniscules                                            */
/***************************************************************/


/* programme principal */
int main(void) {
  /* declaration des variables et roles */
  char s[MAX];
  int t,nbMaj=0,nbMin=0;
  /* Saisie des donnees */
  printf("entrer la chaine de caractere\n");
  scanf("%s",s);
  /* Traitement 1*/
  t = strlen(s);
  /* Traitement n */
  NbMajusculesMinuscules(s,t,&nbMaj,&nbMin);
  /* Affichage des resultats */
  printf("le nombre de majuscules est %d\n",nbMaj);
  printf("le nombre de miniscules est %d\n",nbMin);
  return 0;
}


void NbMajusculesMinuscules(char* s, int t, int* nbMaj, int* nbMin){
    int i;
	for(i=0;i<t;i++){
		if(s[i]>='A'&&s[i]<='Z')
            (*nbMaj)++;
        else
            (*nbMin)++;
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

