
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
    int n,i;
    float prix;
  /* Saisie des donnees */
     do{
		 printf("entrer le nombre de photocopies ");
	     scanf("%d",&n);
 	}while(n<0);
 	
 	if (n<=10){
 		prix = n*0.1;
	 }else if(n<=30){
	 	prix=1+0.09*(n-10);   
	 }else{
	 	prix=2.8+(n-20)*0.08;  /* 2.8 est le prix pour les 30 pemiers copies*/
	 }
 	printf("le prix des photocopies est %f",prix);
  /* Traitement 1*/
  
  /* Traitement n */  
	
  /* Affichage des resultats */
    
}
