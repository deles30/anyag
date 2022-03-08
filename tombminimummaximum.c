#include <stdio.h>

const int TOMB_MERET = 6;

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
    int tomb[] = {89, 5, 50, 60, 70, 71};
    printf("A tomb legkisebb eleme: %d\n", tomb_min_elem(tomb));
    printf("A tomb legnagyobb eleme: %d\n", tomb_max_elem(tomb));
    
}