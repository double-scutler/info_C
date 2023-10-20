#include<stdio.h>
#define N 100
#define M 100
main(){
    int l,c,i,j;
    int matrice[N][M];

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
                printf("matrice[%d][%d]= %d\n",i,j,matrice[i][j]);
            }
        }
    }
    for(i=0;i<l;i++){
        for(j=0;j<i;j++){   //j<i les element au dessus de la diago
               matrice[i][j]=matrice[j][i];
        }


    }


}
