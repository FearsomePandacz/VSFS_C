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

double sqroot(double a) {
    return sqrt(a);
}

double sin_(double a) {
    return sin(a);
}

double cos_(double a) {
    return cos(a);
}

double tan_(double a) {
    return tan(a);
}

int main(int argc, char **argv) {
    char str = NULL;
    double a = NULL;
    double b = NULL;
    char state = NULL; //expect first number, expect operator, expect second number
    while(1) {
        if(scanf("%lf", &a) == 1) {
            if
        } else if(scanf("%s",&str) == 1) {
            //printf("%s - string\n",&str);
        }
        if(str == 'Q') {
            break;
        }
    }
    return 0;
}
