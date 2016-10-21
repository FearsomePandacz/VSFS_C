#include <stdio.h>
#include <conio.h>

char month(int a) {
    const char *month[9] = {"Leden","Unor","Brezen","Duben","Kveten","Cerven","Cervenec","Srpen","Zari"};
    printf("Mesic je %s",month[a]);
}

int main(int argc, char **argv) {
    int x;
    printf("Cislo mesice: ");
    scanf("%i", &x);
    month(x);
    return 0;
}