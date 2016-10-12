#include <stdio.h>
#include <math.h>

int main();

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    return a / b;
}

int sqroot(int a) {
    return sqrt(a);
}

int s(int a) {
    return sin(a);
}

int c(int a) {
    return cos(a);
}

int t(int a) {
    return tan(a);
}

int main(int argc, char **argv) {
    char str = NULL;
    int a = NULL;
    int b = NULL;
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
