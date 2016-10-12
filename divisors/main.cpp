#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(int argc, char **argv) {
    int i, n;
    scanf("%d",&n);
    for (i = 1; i <= sqrt(n) + 1; i++) {
        if (n % i==0) {
            if (n / i == i) {
                printf("%d ", i);
            } else {
                printf("%d %d ", i, n/i);
            }
        }
    }
}