
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
#include <stdlib.h>
#include <time.h>

/* definition de constantes */

/* definition de types */



main() {
  /* declaration des variables et precision de leurs roles */
    int i=0,n,d,resultat=0;
    srand(time(NULL));
    n=rand()%1000;
    printf("la valeur de n %d",n);
    
  /* Saisie des donnees */
    while(!resultat&&(i<10)){
     	printf("devinez le nombre\n");
     	scanf("%d",&d);
     	if(d<n){
     		
     		printf("plus petit\n");
     		
		} 
		else if(d>n){
			
			printf("plus grand\n");
			
		}else{
			/*printf("eyoo");*/
			resultat=1;
		}
		i++;
	 }
	 
	 
	 if(resultat){
	 	printf("vous avez gagne");
	 }else{
	 	printf("vous avez perdu :( ");
	 }
  /* Traitement 1*/
  
  /* Traitement n */  
	
  /* Affichage des resultats */
    
}
