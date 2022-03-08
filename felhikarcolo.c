# include <stdio.h>
# include <math.h>
# include <stdlib.h>

int felhokarcolo(int meret, char tomb[] ){
int eredmeny  = 0;
int j = 0;
int a = 0;
for (int i = 0; i < meret - 2; i++){
    j = i + 1;
    a =abs(tomb[j] - tomb[i]);
    eredmeny += a;
}
return eredmeny;
}
int main(){
     char tomb[] = "179769313486231590772930519078902473361797697894230657273430081157732675805500963132708477322407536021120113879871393357658789768814416622492847430639474124377767893424865485276302219601246094119453082952085005768838150682342462881473913110540827237163350510684586298239947245938479716304835356329624224137216";
     int meret = sizeof(tomb);
     felhokarcolo(meret, tomb);
     printf("%d\n",felhokarcolo(meret,tomb));
     return 0;
}