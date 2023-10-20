#include<stdio.h>
#define N 100
#define M 100
#include <limits.h>
main(){
    int l,c,i,j,trace=0;
    int matrice[N][M];
    int max=INT_MIN;
    int permuter;


    do{
        printf("entrer les dimensions de tableau (max 100 x 100)\n");
        scanf("%d %d",&l,&c);
    }while(l>=N||l<0||c>=M||c<0);

    if(l==0||c==0){
        printf("la matrice est vide\n");
    }else{
        for(i=0;i<l;i++){
            for(j=0;j<c;j++){
                printf("entrer la valeur matrice[%d][%d]\n",i+1,j+1);
                scanf("%d",&matrice[i][j]);
                printf("matrice[%d][%d]= %d\n",i+1,j+1,matrice[i][j]);
            }
        }
    }
    for(i=0;i<l;i++){
        for(j=i;j<c;j++){   //j<i les element au dessus de la diago
            if(i!=j){
               permuter=matrice[j][i];
               matrice[j][i]=matrice[i][j];
               matrice[i][j]=permuter;
            }
        }
    }
    /* afficher la matrice transposé */
    for(i=0;i<l;i++){
            for(j=0;j<c;j++){
                printf("la valeur de l'element matrice[%d][%d] est %d\n",i+1,j+1,matrice[i][j]);
            }
    }
    for(i=0;i<l;i++){
            for(j=0;j<c;j++){
                if(i==j){
                    trace+=matrice[i][j];
                }
            }
    }
    printf("la valeur de trace : %d\n",trace);
    for(i=0;i<l;i++){
            for(j=0;j<c;j++){
                if (matrice[i][j]>max)
                    max=matrice[i][j];
            }
    }
    printf("le maximum est : %d",max);
}
