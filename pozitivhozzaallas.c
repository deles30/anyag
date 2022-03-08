#include <stdio.h>

const int TOMB_MERET = 7;

void abs(int tomb[]) {
    for (int i = 0; i < TOMB_MERET; i++) {
        if(tomb[i] < 0) printf("%d ",tomb[i] * -1);
        else printf("%d ", tomb[i]);
    }
    
}

int main() {
    int tomb[] = {-12, 54, -65, 78, 62, 55, 69};
    abs(tomb);
}
