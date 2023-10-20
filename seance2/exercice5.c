
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
	typedef struct {
		int x;
		int y;
	} t_point;
	typedef struct {
		t_point A;
		t_point B;
		t_point C;
		t_point D;
	} t_quadrilatere;


main() {
  /* declaration des variables et precision de leurs roles */
    t_point A,B,C,D;
    t_quadrilatere Q;
  /* Saisie des donnees */
     printf("entrer les coordonees du premier point du quadrilatere\n");
     scanf("%d %d",&(A.x),&(A.y));
     printf("entrer les coordonees du deusieme point du quadrilatere\n");
     scanf("%d %d",&(B.x),&(B.y));
     printf("entrer les coordonees du troisieme point du quadrilatere\n");
     scanf("%d %d",&(C.x),&(C.y));
     printf("entrer les coordonees du quatrieme point du quadrilatere\n");
     scanf("%d %d",&(D.x),&(D.y));
  /* Traitement 1*/
  	Q.A=A;
  	Q.B=B;
  	Q.C=C;
  	Q.D=D;
  /* Traitement n */  
	
  /* Affichage des resultats */
    printf("les coordonées des points de quadrilaetere Q sont : (%d,%d),(%d,%d),(%d,%d),(%d,%d)",Q.A.x,Q.A.y,Q.B.x,Q.B.y,Q.C.x,Q.C.y,Q.D.x,Q.D.y);
}
