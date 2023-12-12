

#include<stdio.h>


#define N 30

void est_additif(int M[][N],int n,int* additif);

int main(){

    int M[N][N];
    int n,i,j,additif=1;


    do{
        printf("rentrer la dimension de la matrice (maximum %d)\n",N);
        scanf("%d",&n);
    }while(n>30);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("rentrer la valeur M[%d][%d]\n",i,j);
            scanf("%d",&M[i][j]);
        }

    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("la valeur de  M[%d][%d] est %d \n",i,j,M[i][j]);
        }
    }
    printf("additif avant : %d \n",additif);
    est_additif( M, n,&additif);
    printf("additif apres  : %d \n",additif);
    if(additif==1)
        printf("oui la matrice forme un carré additif\n");
    else
        printf("non la matrice ne forme pas un carré additif\n");
}

void est_additif(int M[][N],int n,int* additif){

    int somme=0,somme2=0,somme3=0;
    int i,j;


    for(i=0;i<n;i++){
        somme+=M[0][i];
    }

    i=0;

    while((*additif)==1&&i<n){

        for(j=0;j<n;j++){
            somme2+=M[i][j];
        }

        if(somme2!=somme){
            (*additif)=0;

        }
        i++;
        somme2=0;
    }
    i=0;
    j=0;
     while((*additif)==1&&j<n){

        for(i=0;i<n;i++){
            somme2+=M[i][j];
        }
        if(somme2!=somme){
            (*additif)=0;

        }
        j++;
        somme2=0;
    }

    i=0;
    j=0;
    for(i=0;i<n;i++){
        somme2+=M[i][i];
        somme3+=M[i][n-i-1];
    }
    if(somme2!=somme||somme3!=somme){
        (*additif)=0;

    }
}
