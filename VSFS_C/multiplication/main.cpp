#include <stdio.h>
#include <conio.h>

int main(int argc, char **argv) {
    for(int i = 1; i < 11; i++) {
        printf("\n");
        for(int j = 0;j < 11; j++) {
            printf("%i ",j*i);
        }
    }
}