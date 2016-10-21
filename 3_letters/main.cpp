#include <stdio.h>
#include <conio.h>

int factorial(int a) {
    int x = 1;
    for(a; a > 0; a--) {
        x = x*a;
    }
    return x;
}

int combination(int a, int b) {
    return factorial(a)/(factorial(a-b) * factorial(b));
}

int main(int argc, char **argv) {
    int i,j,k,x;
    char chars[5] = "TGCA";
    x = combination(4, 3);
    for(i = 0; i < x; i++) {
        printf("%c",chars[i]);
        for(j = 1; j < x - 1; i++) {
            printf("%c",chars[i]);
        }
    }
}