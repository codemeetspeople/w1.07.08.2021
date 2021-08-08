#include <stdio.h>

void printLine(int start, int size, int step) {
    for ( int i = start; i < size; i += step ) {
        printf("%d ", i);
    }
    printf("%d\n", size);
}

int increment(int value) {
    return value + 1;
}

void increment2(int *value) {
    *value += 1;
}

int sum(int x, int y) {
    return x + y;
}

int main() {
    int x = 5, y = 10;

    printf("%d\n", sum(x, y));

    return 0;
}
