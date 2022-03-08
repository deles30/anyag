#include <stdio.h>

int Haromszog(double a, double b, double c){

        if(a<0 || b<0 || c<0){
            printf("Adjon meg harom pozitiv szamot");
        }
        else if (a + b > c && a + c > b && b + c > a){
            printf("A haromszog szerkesztheto");
         }
        else{
            printf("A haromszog nem szerkesztheto");
        }
    return 0;
    }
    
int main()
{
    
    double a,b,c;
    printf("Adja meg a haromszog harom oldalat\n");
    scanf("%lf %lf %lf",&a,&b,&c);
    Haromszog(a,b,c);

    return 0;
}
