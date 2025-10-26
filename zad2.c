#include <stdio.h>

int main() {
    int a, b;
    printf("Podaj dwie liczby: ");
    scanf("%d %d", &a, &b);

    printf("Suma: %d\n", a + b);
    printf("Różnica: %d\n", a - b);
    printf("Iloczyn: %d\n", a * b);
    if (b != 0) {
        printf("Iloraz: %.2f\n", (float)a/b);
        printf("Reszta z dzielenia: %d\n", a % b);
    } else {
        printf("Nie można dzielić przez 0!\n");
    }
    return 0;
}
    


