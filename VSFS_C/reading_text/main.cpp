#include <stdio.h>
#include <conio.h>

int main(int argc, char **argv) {
    char x;
    while(1) {
        scanf("%c",&x);
        if(x == 'X') {
            return 0;
        }
    }
}