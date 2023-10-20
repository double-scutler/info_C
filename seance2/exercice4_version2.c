
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

  	float distance;
    typedef struct point{
    	float x,y;
	}point;

int main() {
  /* declaration des variables et precision de leurs roles */

	 point A;
	 point B;

  /* Saisie des donnees */
     printf("entrer les coordonnées de A");
     scanf("%f %f",&(A.x),&(A.y));
     printf("entrer les coordonnées de B");
     scanf("%f %f",&(B.x),&(B.y));
  /* Traitement 1*/
  //printf("%f",A.x);
  	distance=sqrt(((A.x)-(B.x))*((A.x)-(B.x))  +  ((A.y)-(B.y))*((A.y)-(B.y)));
 	printf("la distance est : %f",distance);
  /* Traitement n */  
	
  /* Affichage des resultats */
    return 0;
}
