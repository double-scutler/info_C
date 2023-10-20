
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

/* definition de constantes */

/* definition de types */



main() {
  /* declaration des variables et precision de leurs roles */
    int i,j,nbcol,nblig;
  /* Saisie des donnees */
     printf("entrer le nombre de lignes");
     scanf("%d",&nblig);
     printf("entrer le nombre de colonnes");
     scanf("%d",&nbcol);
  /* Traitement 1*/
  for(i=0;i<nbcol;i++){
  	printf("* ");
  }
  for(j=0;j<nblig-2;j++){
  	printf("\n*");
  	for(i=0;i<nbcol-2;i++){
  	printf("  ");
    }
  	printf(" * ");
  }
  printf("\n");
  if(nblig>1){
	  for(i=0;i<nbcol;i++){
	  	printf("* ");
  }}
  /* Traitement n */  
	
  /* Affichage des resultats */
    
}
