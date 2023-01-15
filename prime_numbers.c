#include <stdio.h>
#include <stdlib.h>

#ifndef taille
    #define taille 10000000
#endif

int estPrems(int*tab, int j, int index){
    int i = 0;
    while(j>=tab[i]*tab[i]){
        if(j%tab[i++]==0){
            return 0;
        }
    }


    return 1;
}
int compter(int*tab){
    int cpt =0;
    for(int i=0;i<taille && tab[i]!=0;++i){
        cpt++;
    }
    return cpt;
}

void tableau(){
    int* nbrPrems=malloc(taille*sizeof (int));
    nbrPrems[0]=2;
    int courant = 3;
    int index = 0;
    for(int i=1;i<taille;++i){
        if(estPrems(nbrPrems,courant,index))
            nbrPrems[index++]=courant;
        courant+=2;
    }
    /*for(int i=0;i<30 && nbrPrems[i]!=0;++i){
        printf("%d ",nbrPrems[i]);
    }*/
    printf("%d\n",compter(nbrPrems));
}

int main() {
    tableau();
    return 0;
}
