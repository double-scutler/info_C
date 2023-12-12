
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
#include<string.h>
/* definition de constantes */
#define N 256
/* definition de types */


void est_contenu(int* resultat, char chaine1[], char chaine2[]);
int main() {
  /* declaration des variables et precision de leurs roles */
    int resultat=0;
    char chaine1[256],chaine2[256];
  /* Saisie des donnees */
     printf("rentrer la chaine1 (maximum (256caractere)\n");
     scanf("%s",chaine1);
     printf("rentrer la chaine2 (maximum (256caractere)\n");
     scanf("%s",chaine2);
  /* Traitement 1*/
    est_contenu(&resultat,chaine1,chaine2);
  /* Traitement n */
	if(resultat)
        printf("la chaine1 est contenue dans la chaine2\n");
    else
        printf("la chaine1 n'est pas contenue dans la chaine2\n");
  /* Affichage des resultats */

}
void est_contenu(int* resultat, char chaine1[], char chaine2[]){
    if (strlen(chaine1)>strlen(chaine2))
        return;
    int i=0,j=0;
    while(!(*resultat)&&i<strlen(chaine1)){
        while((chaine2[i+j]==chaine1[j])&&j<strlen(chaine1)){
            j++;
        }

        if(j>=strlen(chaine1)){
           (*resultat)=1;
        }
        i++;
    }
}
