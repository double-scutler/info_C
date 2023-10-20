
/******************************************************************/
/* Auteur : Prenom NOM                                            */
/* Date   : 29 Septembre 2023                                     */
/* Dept   : IMDS3A - Polytech                                     */
/* Seance n?1 - Complements Langage C - Exercice 1                */
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
    int age,annees_permis,nb_accident;
    
  /* Saisie des donnees */
     printf("entrez l'age, les annees apres obtention de perrmis et le nb d'accident");
     scanf("%d%d%d",&age,&annees_permis,&nb_accident);
  /* Traitement 1*/
  	if(age<=25){
  		
  		if(annees_permis<2){
  			
  			if(nb_accident){
  				
  				printf("on peut pas vous assurer");
			  }else{
			  	
			  	printf("tarif rouge");
			  }
		  }else{    /* permis plus que 2 ans*/
		  
		  	if(nb_accident==0){
		  		
		  		printf("tarif orange")	;
		  }else if (nb_accident==1){
		  	
		  	printf("tarif rouge");
		  }else{
		  	
		  	printf("on peut pas vous assurer");
		  }
		  	
		 }
		  
	}else{
		if(annees_permis<2){
			
			if (nb_accident==0){
				printf("tarif orange");
			}else if (nb_accident==1){
				printf("tari rouge");
			}else{
				printf("on peut pas vous assurer");
			}
		}else{       /* le conducteur a plus que 25 et titulaire d'un permis de plus que 2 ans*/
		
			switch (nb_accident){
				case 0 : printf("tarif vert");break;
				case 1 : printf("tarif orange");break;
				case 2 : printf("tarif rouge");break;
				default : printf("on peut pas vous assurer");
			}
		}
	}	
  /* Traitement n */  
	
  /* Affichage des resultats */
    
}

