#include <stdio.h>

int Haromszog(double a, double b, double c){

        if(a<0 || b<0 || c<0){
            printf("Pozitív számot adjon meg!");
        }
        else if (a + b > c && a + c > b && b + c > a){
            printf("Lehet belőlük háromszöget készíteni.");
         }
        else{
            printf("Nem lehet belőlük háromszöget készíteni.");
        }
    return 0;
    }
    
int main()
{
    
    double a,b,c;
    printf("Adja meg a háromszög 3 oldalát!\n");
    scanf("%lf %lf %lf",&a,&b,&c);
    Haromszog(a,b,c);

    return 0;
}