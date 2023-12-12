#include <stdio.h>
#include <stdlib.h>
#include "tp32.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void rotate(t_img *img);

int main(int argc, char *argv[]) {
	t_img img;
	int erreur=0;
	char nom_fich[]="logo.pgm";
	lire_img( nom_fich,  &img, &erreur);
	printf("erreur est : %d",erreur);
	creer_img("logo2.pgm", &img);
	rotate(&img);
	return 0;
}
void rotate(t_img *img){
	int i,j;
	for (i=0;i<img->hauteur;i++){
		for (j=0;j<img->largeur;j++){
			img->pixels[i][j]=img->pixels[j][img->largeur - i];
		}
	}
}


