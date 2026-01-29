#include <stdio.h>

void zamien(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5;
    int y = 10;

    printf("Przed zamiana: x=%d y=%d\n", x, y);

    zamien(&x, &y);

    printf("Po zamianie:  x=%d y=%d\n", x, y);

    return 0;
}
