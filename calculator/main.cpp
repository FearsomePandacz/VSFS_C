#include <stdio.h>
#include <math.h>

int main();

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    return a / b;
}

double sqrt(double a) {
    return sqrt(a);
}

double sin(double a) {
    return sin(a);
}

double cos(double a) {
    return cos(a);
}

double tan(double a) {
    return tan(a);
}

int main(int argc, char **argv) {
    char str = NULL;
    double a = NULL;
    double b = NULL;
    int state = 1; //expect first number = a, expect operator = b, expect second number = c
    while(1) {
        if (str == "Q") {
            break;
        } else {
            if (state == 1) {
                if (scanf("%lf", &a) == 1) {
                    b = NULL;
                    state = 2;
                }
            } else if(state == 2) {
                if(scanf("%s", &str) == 1) {
                    if(str == "+" || str == "-" || str == "/" || str == "*") {
                        state = 3
                    } else if(str == "sin" || str == "cos" || str == "tan" || str == "sqrt") {

                    }
                }
            }
        }
    }
    return 0;
}