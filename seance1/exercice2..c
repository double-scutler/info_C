
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
    
  /* Saisie des donnees */
     int x,y;
  /* Traitement 1*/
  printf("veuillez entrer deux nombres\n");
  scanf("%d%d",&x,&y);

  /* Traitement n */  
	if ((x<0 && y<0)||(x>0 && y>0)){
		printf("le produit est postif");
	}else{
		printf("le produit est negatif");
	}
  /* Affichage des resultats */
    
}
