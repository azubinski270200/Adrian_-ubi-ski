#include <stdio.h>
#include <ctype.h>

/* zmienna globalna – liczba elementów w tablicy */
int n = 0;

/* wypisanie tablicy */
void wypisz(char tab[]) {
    if (n == 0) {
        printf("Blad: tablica jest pusta\n");
        return;
    }

    for (int i = 0; i < n; i++)
        printf("%c ", tab[i]);
    printf("\n");
}

/* dodawanie cyfry do tablicy */
void dodaj(char tab[]) {
    char c;

    if (n >= 100) {
        printf("Blad: brak miejsca w tablicy\n");
        return;
    }

    printf("Podaj cyfre: ");
    scanf(" %c", &c);

    if (!isdigit(c)) {
        printf("Blad: podany znak nie jest cyfra\n");
        return;
    }

    tab[n] = c;
    n++;
}

/* usuwanie elementu o podanym indeksie */
void usun(char tab[]) {
    int idx;

    if (n == 0) {
        printf("Blad: tablica jest pusta\n");
        return;
    }

    printf("Podaj indeks (0-%d): ", n - 1);
    scanf("%d", &idx);

    if (idx < 0 || idx >= n) {
        printf("Blad: niepoprawny indeks\n");
        return;
    }

    for (int i = idx; i < n - 1; i++)
        tab[i] = tab[i + 1];

    n--;
}

/* suma cyfr */
int suma(char tab[]) {
    if (n == 0)
        return -1;

    int s = 0;
    for (int i = 0; i < n; i++)
        s += tab[i] - '0';

    return s;
}

/* wypisanie jako drzewo binarne */
void drzewo(char tab[]) {
    if (n == 0) {
        printf("Blad: tablica jest pusta\n");
        return;
    }

    int poziom = 1;
    int i = 0;

    while (i < n) {
        for (int sp = 0; sp < (100 / poziom); sp++)
            printf(" ");

        for (int j = 0; j < poziom && i < n; j++) {
            printf("%c ", tab[i]);
            i++;
        }

        printf("\n");
        poziom *= 2;
    }
}

int main() {
    char tab[100];
    int wybor;

    while (1) {
        printf("\nMENU:\n");
        printf("0 - wyjscie\n");
        printf("1 - wypisz tablice\n");
        printf("2 - dodaj cyfre\n");
        printf("3 - usun element\n");
        printf("4 - suma cyfr\n");
        printf("5 - wypisz jako drzewo\n");
        printf("Wybor: ");

        scanf("%d", &wybor);

        switch (wybor) {
            case 0:
                return 0;

            case 1:
                wypisz(tab);
                break;

            case 2:
                dodaj(tab);
                break;

            case 3:
                usun(tab);
                break;

            case 4: {
                int s = suma(tab);
                if (s == -1)
                    printf("Blad: tablica jest pusta\n");
                else
                    printf("Suma = %d\n", s);
                break;
            }

            case 5:
                drzewo(tab);
                break;

            default:
                printf("Blad: niepoprawny wybor\n");
        }
    }
}
