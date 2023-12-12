#include<stdio.h>
#include"tp32.h"
#define MAX 600






typedef struct t_img{
    int largeur,hauteur;
    tableau_pixels[MAX][MAX];
	}t_img;


	
int main(){
    struct t_img img;
    char nom_fich[300];
    nom_fich="logo";
    int erreur;
    lire_img(nom_fich,&img,&erreur);
}






/*
  Précondition :
    - nom_fichier contient le nom d’un fichier image (format en niveau de gris pgm)

  Postcontitions :
    - si erreur = 0 : img contient l’image,
    - si erreur = 1 : le fichier image n’est pas le bon format
    - si erreur = 2 : le fichier n’existe pas sur le disque
    - si erreur = 3 : l’image lue est trop grande
    - si erreur = 4 : l’image lue est corrompue (pas le bon nombre de pixels)
*/
void lire_img(char *nom_fich,t_img *img, int *erreur)
{
  FILE *f1;
  int largeur,hauteur,intensite,i,j,indice_h,indice_l,nb_pixels;
  int fin_lecture=0, courant;
  unsigned char tab[TAILLE_MAX][TAILLE_MAX];
  char ch[TAILLE_MAX];

  *erreur=0;

  if ((f1=fopen(nom_fich,"r"))==NULL)
  {
    *erreur=2;
    return;
  }
  else
  {
    fscanf(f1,"%s",ch);
    if (strcmp(ch,"P2")!=0)
    {
      *erreur=1; /* pas le bon format d'image */
      fclose(f1);
      return;
    }

    fscanf(f1,"%d%d", &largeur, &hauteur);
    fscanf(f1,"%d", &intensite);
    if (largeur>TAILLE_MAX || hauteur>TAILLE_MAX)
    {
      *erreur=3;
      fclose(f1);
      return;
	}

    indice_h=0;
    indice_l=0;
    nb_pixels=0;

    do
    {
      if (fscanf(f1,"%d",&courant)!=EOF)
      {
        tab[indice_h][indice_l]=courant;
        indice_l=indice_l+1;
        nb_pixels=nb_pixels+1;
        if (indice_l==largeur){
          indice_l=0;
          indice_h=indice_h+1;
        }
      }
      else
        fin_lecture=1;

	}while(fin_lecture==0 && indice_h<TAILLE_MAX && indice_l<TAILLE_MAX);

    if ((nb_pixels==(largeur)*(hauteur)) && (fin_lecture==1))
    {
      img->largeur=largeur;
      img->hauteur=hauteur;
      for (i=0;i<hauteur;i++)
        for (j=0;j<largeur;j++)
          img->pixels[i][j]=tab[i][j];
    }
    else
      *erreur=4; /* pas assez ou trop de pixels dans le fichier */

    fclose(f1);
  }
}
