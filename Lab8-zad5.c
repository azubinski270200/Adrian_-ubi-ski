#include <stdio.h>

int max_i_zero(int *tab, int n) {
    int max = tab[0];
    int indeks = 0;

    for (int i = 1; i < n; i++) {
        if (tab[i] > max) {
            max = tab[i];
            indeks = i;
        }
    }

    tab[indeks] = 0;
    return max;
}

int main() {
    int tab[] = {3, 7, 2, 9, 5};
    int n = 5;

    int max = max_i_zero(tab, n);

    printf("Najwiekszy element: %d\n", max);
    printf("Tablica po zmianie:\n");

    for (int i = 0; i < n; i++)
        printf("%d ", tab[i]);

    return 0;
}
