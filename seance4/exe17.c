#include <stdlib.h>




main(){
    char nom[20];
    char prenom[20];
    char email[60];

    printf("veuillez rentre votre nom");
    scanf("%s",nom);

    printf("veuillez rentre votre prenom");
    scanf("%s",prenom);

    sprintf(email,"%s.%s@etu.uca.fr",prenom,nom);
    printf("l'email est : %s",email);

}
