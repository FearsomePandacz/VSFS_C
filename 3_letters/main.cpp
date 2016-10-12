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
    const char *chars[4] = {"T","G","C","A"};
    int x = combination(4, 3);
    for(int i = 0; i < x; i++) {
        printf("%c%c%c",chars[]);
    }
}