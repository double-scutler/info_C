
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
    int i,j,T[11];
    int note,fin=1;
    int effectif=0;
    
  /* Saisie des donnees */
  	for(i=0;i<11;i++){
  		T[i]=0;
	  }
    while(fin){
    	do{
	    	printf("entrer une note entre 10 et 20 ");
	    	scanf("%d",&note);
		}while(note!=-1&&note<10&&note>20);
		
		if(note==-1){
			fin=0;
		}
		T[note-10]++;
	}
	for(i=0;i<=10;i++){
		
		effectif = T[i];
		printf("%d :\t",i+10);
		
		for(j=0;j<effectif;j++){
			
			printf("*");
		}
		printf("\n");
	}
  /* Traitement 1*/
  
  /* Traitement n */  
	
  /* Affichage des resultats */
    
}
