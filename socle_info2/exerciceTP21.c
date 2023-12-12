#include<stdio.h>



main(){
    int i,j,k,permuter;
    int matrice1[3][3];
    int matrice2[3][3]
    int matriceprod[3][3];

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("entrer la valeur matrice1[%d][%d]\n",i,j);
            scanf("%d",&matrice1[i][j]);
        }
    }
       for(i=0;i<3;i++){
        for(j=i;j<3;j++){   //j<i les element au dessus de la diago
            if(i!=j){
               permuter=matrice1[j][i];
               matrice1[j][i]=matrice1[i][j];
               matrice1[i][j]=permuter;
            }
        }
    }
     /* afficher la matrice transposé */
    for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                printf("la valeur de l'element matrice1[%d][%d] est %d\n",i,j,matrice1[i][j]);
            }
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            matriceprod[i][j]=0;
            for(k=0:k<3;k++){
                matriceprod[i][j] += matrice1[i][k] * matrice2[k][j];
            }
        }
    }
     /* afficher la matrice produit */
    for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                printf("la valeur de l'element matrticeprod[%d][%d] est %d\n",i,j,matriceprod[i][j]);
            }
    }

}
