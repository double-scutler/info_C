#include<stdio.h>
#include<string.h>

main(){
    int i=0,len,pallindrome=1;
    char chaine[51];
    printf("entrer une chaine de caractere de maximum 50 caractere");
    scanf("%s",chaine);
    while(chaine[i]!='\0'){
        if (chaine[i]<'a')
            chaine[i]=chaine[i]+'a'-'A';
            i++;
    }
    printf("la nouvelle chaine est : %s\n",chaine);
    len=strlen(chaine);
    printf("%d",len);
    i=0;
    while((pallindrome)&&(i<len/2)){
            printf("%d",i);
        if (chaine[i]!=chaine[len-i-1]){
            pallindrome=0;
        }
        i++;
    }
    if(pallindrome==1)
        printf("la chaine est bien un pallindrome");
    else
        printf("la chaine n'est pas un pallindrome");


}
