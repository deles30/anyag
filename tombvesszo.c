#include <stdio.h>

void tomb_kiir(int meret, int tomb[]){
    for(int i=0; i<meret; i++){
        if(i==4){
            printf("%d ",tomb[i]);
            return;
        }
        printf("%d, ",tomb[i]);
    }
}



int main(){

int szamok[5]={4, 7, 34, 23, 67};
int meret = 5;
tomb_kiir(meret,szamok);

return 0;

}
