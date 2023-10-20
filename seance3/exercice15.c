
/******************************************************************/
/* Auteur : Prenom NOM                                            */
/* Date   : 29 Septembre 2023                                     */
/* Dept   : IMDS3A - Polytech                                     */
/* Seance n°1 - Complements Langage C - Exercice 1                */
/******************************************************************/
/* Role du programme                                              */
/*                                                                */
/******************************************************************/
 
/* fichiers entete necessaires */
#include <stdio.h>

#define MAX 100
/* definition de constantes */

/* definition de types */



int main() {
  /* declaration des variables et precision de leurs roles */
    int X,i,N=0,T[MAX];
  /* Saisie des donnees */
      while(N<=0||N>MAX){
  
	  printf("entrer la dimension de votre tableau \n");
	  scanf("%d",&N);
}
 	for(i=0;i<N;i++){
     	printf("entrer une valeur\n");
     	scanf("%d",&T[i]);
     }
    printf("donner la valeur que vous souhaitez rechercher");
    scanf("%d",&X);
  /* Traitement 1*/
  	
  /* Traitement n */  
	
  /* Affichage des resultats */
    for(i=0;i<N;i++){
  		if (T[i]==X){
  			printf("la position de la valeur X est %d",i+1);
			return 0;
		}
	}
	printf("la valeur n'existe pas");
	return 0;
}
