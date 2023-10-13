#include <stdio.h>

/**
 * print_combinations - Generate and print combinations of four distinct digits
 */
void print_combinations() {
    for (int a = 0; a <= 9; a++) {
        for (int b = 0; b <= 9; b++) {
            for (int c = 0; c <= 9; c++) {
                for (int d = 0; d <= 9; d++) {
                    if (a != b && a != c && a != d && b != c && b != d && c != d) {
                        printf("%d%d %d%d", a, b, c, d);
                        if (!(a == 9 && b == 8 && c == 9 && d == 9)) {
                            printf(", ");
                        }
                    }
                }
            }
        }
    }
}

int main(void) {
    print_combinations();
    putchar('\n');
    return 0;
}
