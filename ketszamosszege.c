#include <stdio.h>
#include <stdlib.h>

int main(){
int darab=0;
int szam=0;

printf("Hány db számot szeretnél bevinni?\n");
scanf("%d",&darab);
int tomb[darab];
for(int i = 0; darab>i; i++)
{
    printf("%d. szám: ",i+1);
    scanf("%d",&szam);
    tomb[i]=szam;
}
printf("A bevitt számok abszolútértéke:");
int tomb2[darab];
for(int i=0;i<darab;i++)
{
    if (tomb[i]<0)
    {
        tomb2[i]=tomb[i]*(-1);
        printf("%d, ",tomb2[i]);
    }
    else
    {
        printf("%d, ",tomb[i]);
    }
    
}
printf("\nA megadott számok:");
for(int i=0;i<darab;i++){
    printf("%d, ", tomb[i]);
}

return 0;

}