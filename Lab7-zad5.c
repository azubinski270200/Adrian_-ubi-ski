#include <stdio.h>

void binarnie(int n) {
    if (n == 0)
        return;

    binarnie(n / 2);
    printf("%d", n % 2);
}

int main() {
    int n;

    printf("Podaj liczbe dziesietna: ");
    scanf("%d", &n);

    if (n == 0)
        printf("0");
    else
        binarnie(n);

    printf("\n");

    return 0;
}
