#include <stdio.h>

/* zmienna globalna */
int globalna = 10;

/* funkcja wypisujaca adresy dwoch liczb */
void wypisz_adresy(int *a, int *b) {
    printf("Adres a: %p\n", a);
    printf("Adres b: %p\n", b);
}

int main() {
    int lokalna = globalna;

    printf("Adres zmiennej globalnej: %p\n", &globalna);
    printf("Adres zmiennej lokalnej:  %p\n", &lokalna);

    wypisz_adresy(&globalna, &lokalna);

    return 0;
}
