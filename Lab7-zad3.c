#include <stdio.h>

void wypisz(int n) {
    if (n == 0)
        return;

    wypisz(n - 1);
    printf("%d ", n);
}

int main() {
    int n;

    printf("Podaj n: ");
    scanf("%d", &n);

    wypisz(n);

    return 0;
}
