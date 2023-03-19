#include <stdio.h>

int main(void) {
    int i, j;

    for (i = 0; i < 10; i++) {
            putchar(i + '0');
            if (i != 9) {
                putchar(',');
            }
        }
    return 0;
}

