#include <stdio.h>
#include <math.h>

int main(int argc, char **argv) {
    char a;
    int b;
    char operation;
    b = NULL;
    while(1) {
        a = getchar();
        if (a == 'Q') {
            break;
        } else {
            if (a == 10) {
                continue;
            } else if (a < 58 && a > 47 && b == NULL) {
                b = a - 48;
            } else if ((a == '+' || a == '-' || a == '/' || a == '*') && b != NULL) {
                operation = a;
            } else if (operation == '+' && a != NULL) {
                printf("%i\n", b = b + (a - 48));
                operation = NULL;
            } else if (operation == '-' && a != NULL) {
                printf("%i\n", b = b - (a - 48));
                operation = NULL;
            } else if (operation == '*' && a != NULL) {
                printf("%i\n", b = b * (a - 48));
                operation = NULL;
            } else if (operation == '/' && a != NULL) {
                printf("%i\n", b = b / (a - 48));
                operation = NULL;
            } else if (a == 'r' && b != NULL) {
                printf("%i\n", b = sqrt(b));
            } else if (a == 's' && b != NULL) {
                printf("%i\n", b = sin(b));
            } else if (a == 'c' && b != NULL) {
                printf("%i\n", b = cos(b));
            } else if (a == 't' && b != NULL) {
                printf("%i\n", b = tan(b));
            }
        }
    }
    return 0;
}