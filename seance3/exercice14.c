
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
    int i,N=0,T[200],min,max;
  /* Saisie des donnees */
  while(N<=0||N>200){
  
	  printf("entrer la dimension de votre tableau \n");
	  scanf("%d",&N);
}
     for(i=0;i<N;i++){
     	printf("entrer une valeur\n");
     	scanf("%d",&T[i]);
	 }
	 
  /* Traitement 1*/
  for(i=0;i<N;i++){
     	printf("%d ",T[i]);
		}
	 
  /* Traitement n */  
	min = T[0];
	max = T[0];
	
	for(i=1;i<N;i++){
     	if (T[i]<min){
     		min = T[i];
		 }
		if (T[i]>max){
			max = T[i];
		}
	}
  /* Affichage des resultats */
    printf("\nla valeur maximale est : %d ",max);
    printf("\nla valeur minimale est : %d",min);
}
