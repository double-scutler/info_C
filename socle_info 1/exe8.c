
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
	int n,i,s=0,m;
	float resultat;
  /* Saisie des donnees */
     printf("veuillez rentrer une valeur n\n");
     scanf("%d",&n);
     for (i=0;i<n;i++){
     	printf("rentrer une valeur\n");
     	scanf("%d",&m);
     	s+=m;
	 }
	 resultat = (float)s/(float)n;
	 printf("la moyenne est : %f",resultat);
  /* Traitement 1*/
  
  /* Traitement n */  
	
  /* Affichage des resultats */
    
}
