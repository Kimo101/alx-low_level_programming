#include <stdio.h>

int main() {
    int i = 0;
    putchar(i++ + '0');
    while (i < 10) {
        putchar(',');
        putchar(' ');
        putchar(i++ + '0');
    }
    return 0;
}

