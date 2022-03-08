#include <stdio.h>

void tomb_kiir(int meret, int tomb[]){
    for(int i=0; i<meret; i++){
        if(i==9){
            printf("%d ",tomb[i]);
            return;
        }
        printf("%d, ",tomb[i]);
    }
}



int main(){

int szamok[10]={85,72,45,29,8,35,76,3,88,94};
int meret = 10;
tomb_kiir(meret,szamok);

return 0;

}