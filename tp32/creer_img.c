#include <stdio.h>
#include "tp32.h"

/* 
  PrŽconditionsÊ: 
	- nom_fich contient le nom du fichier image ˆ crŽer 
	- tous les champs de img sont renseignŽs et valides
  PostcontitionÊ: 
	- un fichier dont le nom est dans le paramtre nom_fich est crŽŽ sur le disque,
	  il contient une image
*/
void creer_img(char *nom_fich,t_img *image)
{
  FILE *f1;
  int i,j;

  if ((f1=fopen(nom_fich,"w"))==NULL) {
    return;
  }
  else
  {
    fprintf(f1,"P2\n");	
    fprintf(f1,"%d %d\n", image->largeur, image->hauteur);
    fprintf(f1,"%d\n", 255);

    for (i=0;i<image->hauteur;i++)
    {
      for (j=0;j<image->largeur;j++)
      {
        fprintf(f1,"%d\n",image->pixels[i][j]);
      }
    }					
    fclose(f1);
  }
}
