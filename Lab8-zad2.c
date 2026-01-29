#include <stdio.h>

int main() {
    int tablica[10];
    int *wsk = tablica;

    printf("Podaj 10 liczb:\n");

    for (int i = 0; i < 10; i++) {
        scanf("%d", wsk + i);
    }

    printf("Elementy tablicy:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", *(wsk + i));
    }

    return 0;
}
