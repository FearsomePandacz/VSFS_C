#include <stdio.h>
#include <conio.h>

void multiply(int a) {
    int i;
    for(i = 0; i < 11; i++) {
        printf("%d ",a*i);
    }
}

int main(int argc, char **argv) {
    int x;
    scanf("%d",&x);
    multiply(x);
    return 0;
}