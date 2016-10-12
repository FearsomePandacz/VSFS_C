#include <stdio.h>
#include <conio.h>

int print_hello() {
    return printf("Hello\n");
}

int print_world() {
    return printf("test\n");
}

int main(int argc, char **argv) {
    int a = print_hello();
    int b = print_world();
    printf("%i",a + b);
    return a + b;
}