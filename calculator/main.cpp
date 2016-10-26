//jiri sulc 2016

#include <stdio.h>
#include <math.h>
#include <conio.h>

int main(int argc, char **argv) {
    char a;
    double b;
    char operation = NULL;
    bool bEmpty = true;
    while(1) {
        a = getch();
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
            } else if (operation == '+' && (a < 58 && a > 47)) {
                printf("%g\n", b = b + (a - 48));
                operation = NULL;
            } else if (operation == '-' && (a < 58 && a > 47)) {
                printf("%g\n", b = b - (a - 48));
                operation = NULL;
            } else if (operation == '*' && (a < 58 && a > 47)) {
                printf("%g\n", b = b * (a - 48));
                operation = NULL;
            } else if (operation == '/' && (a < 58 && a > 47)) {
                if((a - 48) != 0) {
                    printf("%g\n", b = b / (a - 48));
                    operation = NULL;
                } else {
                    operation = NULL;
                    b = 0;
                    printf("error\n");
                }
            } else if (a == 'r' && !bEmpty) {
                if(b > 0) {
                    printf("%g\n", b = sqrt(b));
                } else {
                    b = 0;
                    operation = NULL;
                    printf("error\n");
                }
            } else if (a == 's' && !bEmpty) {
                printf("%g\n", b = sin(b));
            } else if (a == 'c' && !bEmpty) {
                printf("%g\n", b = cos(b));
            } else if (a == 't' && !bEmpty) {
                printf("%g\n", b = tan(b));
            }
        }
    }
    return 0;
}