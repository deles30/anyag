#include <stdio.h>

const int TOMB_MERET = 10;

int tomb_min_elem(int tomb[]) {
    int legkisebb = tomb[0];
    for (int i = 0; i < TOMB_MERET; i++) {
        if(tomb[i] < legkisebb) {
            legkisebb = tomb[i];
        }
    }
    return legkisebb;
}

int tomb_max_elem(int tomb[]) {
    int legnagyobb = tomb[0];
    for (int i = 0; i < TOMB_MERET; i++) {
        if(legnagyobb < tomb[i]) {
            legnagyobb = tomb[i];
        }
    }
    return legnagyobb;
}

int main() {
    int tomb[] = {54, 24, 2, 56, 12, 69, 21, 15, 45, 32};
    printf("A tomb legkisebb eleme: %d\n", tomb_min_elem(tomb));
    printf("A tomb legnagyobb eleme: %d\n", tomb_max_elem(tomb));
    
}
