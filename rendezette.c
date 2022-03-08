#include <stdio.h>

int beolvas(int meret, int tomb[]){
    for(int i = 0; i<meret; i++){
        printf("Adja meg a tomb %d elemet: \n",i+1);
        scanf("%d",&tomb[i]);
        if(tomb[i] < 0){
            tomb[i] = tomb[i]*(-1);
        }
    }
    for(int i = 0; i<meret; i++){
        printf("%d, ",tomb[i]);
    }
    puts("");
}
int vizsgal(int meret, int tomb[]){
    int tmp = -1;
    for(int i = 0; i<meret; i++){
        if(tmp < tomb[i]){
            tmp = tomb[i];
        }
        else if(tmp > tomb[i]){
            return 0;
        }
    }
}
int legnagyobb(int meret, int tomb[]){
    int max = tomb[0];
    for(int i = 0; i < meret; i++){
        if(max < tomb[i]){
            max = tomb[i];
        }
    }
return max;
}

int legkisebb(int meret, int tomb[]){
    int min = tomb[10];
    for(int i = 0; i < meret; i++){
        if(min > tomb[i]){
            min = tomb[i];
        }
    }
return min;
}

int main(){

    int tomb[10] = {};
    int meret = 10;

    beolvas(meret,tomb);
    vizsgal(meret,tomb);
    legnagyobb(meret,tomb);
    legkisebb(meret,tomb);

    printf("%s.\n",vizsgal(meret,tomb) ? "A tomb rendezett" : "A tomb nem rendezett");
    printf("A tomb legnagyobb eleme: %d\n",legnagyobb(meret,tomb));
    printf("A tomb legkisebb eleme: %d\n",legkisebb(meret,tomb));

return 0;
}
