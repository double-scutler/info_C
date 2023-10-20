
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
#include <math.h>
/* definition de constantes */

/* definition de types */



main() {
  /* declaration des variables et precision de leurs roles */
    int resultat,i,T[30];
    int decimal = 1,conteur=0;
  /* Saisie des donnees */
  	for (i=0;i<30;i++){
	    printf("entrer une suite de valeur");
	    scanf("%d",&T[i]);
	    
	    if (T[i]==0){
	     	break;
		 	}
		 	
		conteur++;
	}
	
 
  /* Traitement 1*/
   decimal = pow(10,conteur-1);
   
	 for(i=1;i<=conteur;i++){
	 	
	 	resultat+=T[conteur-i]*decimal;
	 	decimal= decimal/10;
	 	
	 }
	 
  /* Traitement n */  
	
  /* Affichage des resultats */
    printf("le resultat est %d : \n",resultat);
}
