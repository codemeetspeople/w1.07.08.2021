#include <stdio.h>

int main() {
    int x = 2147481235;
    int y = 2127188239;

    int average = (x / 2) + (y / 2) + (x % 2 + y % 2) / 2;

    printf("%d\n", average);

    return 0;
}
