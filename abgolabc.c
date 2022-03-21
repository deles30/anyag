#include <stdio.h>
void abc(char betu[]){
    for (int i= 97; i < 123; i++) {
        betu[i]= i;
        printf("%c ", betu[i]);
}
}

int main()
{
    int meret = 26;
    char betu[meret];
    abc(betu);
}