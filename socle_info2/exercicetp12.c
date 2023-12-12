


#include<stdio.h>
void premenadeoui();
void premenadenon();
main(){
    int voisin,temperature,temps;

    do{
    printf("est ce que le voisin est present ?(repondez 1 pour oui et 0 pour non)\n");
    scanf("%d",&voisin);

    }while(voisin!=0&&voisin!=1);

    do{
    printf("combien est-elle la temperature (entrez 1 si la temperature et superieur ou egale a 10 et 0 sinon\n");
    scanf("%d",&temperature);

    }while(temperature!=0&&temperature!=1);

    do{
    printf("entrer le temps (0 pour soleil 1 pour couvert et 2 pour pluie)\n");
    scanf("%d",&temps);

    }while(temps!=0&&temps!=1&&temps!=2);

    if(voisin){
        premenadenon();
    }else{
        if(temperature==1){            //temperature  >= 10
            if(temps==2)    //pluie
                premenadenon();
            else
                premenadeoui(); //pas pluie
        }else{       //temperature <10
            if(temps==0)  //soleil
                premenadeoui();
            else   //pas de soleil
                premenadenon();
        }
    }

}
void premenadeoui(){
    printf("oui on va faire une premenade!\n");
}
void premenadenon(){
    printf("non on va pas faire la premendae :( \n");
}
