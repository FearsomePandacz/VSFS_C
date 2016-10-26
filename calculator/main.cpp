//jiri sulc 2016

#include <stdio.h>
#include <math.h>

int main(int argc, char **argv) {
    char a;
    int b;
    char operation = NULL;
    bool bEmpty = true;
    while(1) {
        a = getchar();
        if (a == 'Q') {
            break;
        } else {
            if (a == 10) {
                continue;
            } else if (a < 58 && a > 47 && operation == NULL) {
                b = a - 48;
                bEmpty = false;
            } else if ((a == '+' || a == '-' || a == '/' || a == '*') && !bEmpty) {
                operation = a;
            } else if (operation == '+') {
                printf("%d\n", b = b + (a - 48));
                operation = NULL;
            } else if (operation == '-') {
                printf("%d\n", b = b - (a - 48));
                operation = NULL;
            } else if (operation == '*') {
                printf("%d\n", b = b * (a - 48));
                operation = NULL;
            } else if (operation == '/') {
                printf("%d\n", b = b / (a - 48));
                operation = NULL;
            } else if (a == 'r' && !bEmpty) {
                printf("%d\n", b = sqrt(b));
            } else if (a == 's' && !bEmpty) {
                printf("%d\n", b = sin(b));
            } else if (a == 'c' && !bEmpty) {
                printf("%d\n", b = cos(b));
            } else if (a == 't' && !bEmpty) {
                printf("%d\n", b = tan(b));
            }
        }
    }
    return 0;
}