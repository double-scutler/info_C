#ifndef TP_32
#define TP_32

/* Taille max des images */
#define TAILLE_MAX 600

/* type structure pour l'image */
typedef struct{
        int largeur;
        int hauteur;
        unsigned char pixels[TAILLE_MAX][TAILLE_MAX];
        } t_img; /* structure de stockage des pixels d'une image pgm */
        
        
/*PROTOTYPES DES PROCEDURES */

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
void lire_img(char *nom_fich, t_img *img, int *erreur);

/* 
  Préconditions : 
	- nom_fich contient le nom du fichier image à créer 
	- tous les champs de img sont renseignés et valides
  Postcontition : 
	- un fichier dont le nom est dans le paramètre nom_fich est créé sur le disque,
	  il contient une image
*/
void creer_img(char *nom_fich, t_img *img);


#endif