#include <stdio.h>
#include "prog1.h"
#include <string.h>
#include <stdlib.h>

int main(int argc, char argv[])
{

    if(argc == 1){
    printf("Hiba! Két paramétert (számot) kell megadni.\n");
    exit(1);
}

else if(argc == 2){
    printf("Hiba! Két paramétert (számot) kell megadni.\n");
    exit(1);
}

else if(argc > 3){
    printf("Hiba! Két paramétert (számot) kell megadni.\n");
    exit(1);
}

    int osszeadas;
    osszeadas = 0;
    for (int i = 1; argv[i] != NULL; i++){
        osszeadas += atoi(argv[i]);
    }
    printf("%d\n", osszeadas);
}