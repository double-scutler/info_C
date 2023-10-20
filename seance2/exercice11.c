
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
typedef enum{true,false}boolean; 


main() {
  /* declaration des variables et precision de leurs roles */
    char ADN[257];
    int A=0,T=0,G=0,C=0,i;
    boolean erreur=false;
  /* Saisie des donnees */
     printf("veuillez rentrer la chaine d'ADN et finir par *\n");
     scanf("%s",ADN);
  /* Traitement 1*/
  	//printf("%d",strlen(ADN));
  	
  	for (i =0;i<strlen(ADN);i++){
  		if (ADN[i]=='*'){
  			break;
		  }
  		switch(ADN[i]){
  			case 'A':
  				A++;
  				break;
  			case 'T':
			  	T++;break;
			case 'G':
				G++;break;
			case 'C':
				C++;break;
			default:
				printf("erreur de saisi");
				erreur = true;
				break;
					
		  }
		if (erreur==true){
			break;
		}
	  }
  /* Traitement n */  
	
  /* Affichage des resultats */
  	if (erreur==false){
  		printf("le nombre de A dans la chaine est %d\n",A);
  		printf("le nombre de T dans la chaine est %d\n",T);
  		printf("le nombre de C dans la chaine est %d\n",C);
  		printf("le nombre de G dans la chaine est %d\n",G);
  	
	  }
}
