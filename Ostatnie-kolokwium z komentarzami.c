#include <stdio.h>
#include <ctype.h>

// (1 punkt) Sama tablica powinna być zadeklarowana dla 20 liczb
// i powinna mieć globalny zasięg.
int tab[20];   // globalna tablica na 20 liczb

// (3 punkty) Funkcja wywoływana dla opcji 'w'
// wypisuje elementy tablicy lub komunikat błędu, jeśli n == 0.
void wypisz(int n) {
    if (n == 0) {
        printf("Tablica jest pusta\n");
        return;
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
}

// (4 punkty) Funkcja wywoływana dla opcji 'd'
// sprawdza czy jest miejsce, pobiera znak (char),
// jeśli to cyfra → zapisuje jej wartość liczbową,
// w przeciwnym razie zapisuje kod ASCII znaku.
void dodaj_d(int *n) {
    char c;

    // sprawdzenie czy jest miejsce w tablicy
    if (*n >= 20) {
        printf("Brak miejsca w tablicy\n");
        return;
    }

    printf("Podaj znak: ");
    scanf(" %c", &c);

    // jeśli znak jest cyfrą → zapisujemy wartość liczbową
    if (isdigit(c))
        tab[*n] = c - '0';
    else
        // w przeciwnym razie zapisujemy kod ASCII znaku
        tab[*n] = c;

    (*n)++;
}

// (3 punkty) Funkcja wywoływana dla opcji 'D'
// analogiczna do 'd', ale użytkownik podaje dowolną liczbę.
void dodaj_D(int *n) {
    int x;

    // sprawdzenie czy jest miejsce w tablicy
    if (*n >= 20) {
        printf("Brak miejsca w tablicy\n");
        return;
    }

    printf("Podaj liczbe: ");
    scanf("%d", &x);

    tab[*n] = x;
    (*n)++;
}

// (3 punkty) Funkcja wywoływana dla opcji 'u'
// usuwa wszystkie wystąpienia podanej liczby,
// przesuwając pozostałe elementy i zmniejszając n.
void usun(int *n) {
    int x, j = 0;

    if (*n == 0) {
        printf("Tablica jest pusta\n");
        return;
    }

    printf("Podaj liczbe do usuniecia: ");
    scanf("%d", &x);

    // przepisywanie tylko elementów różnych od x
    for (int i = 0; i < *n; i++) {
        if (tab[i] != x) {
            tab[j++] = tab[i];
        }
    }

    // nowa liczba elementów
    *n = j;
}

// (3 punkty) Funkcja wywoływana dla opcji 's'
// oblicza sumę elementów tablicy,
// a jeśli tablica pusta — zwraca wartość specjalną (-1).
int suma(int n) {
    if (n == 0)
        return -1;

    int s = 0;
    for (int i = 0; i < n; i++)
        s += tab[i];

    return s;
}

int main() {

    // (1 punkt) Zmienna lokalna n informująca,
    // ile elementów znajduje się w tablicy.
    int n = 0;

    char op;

    // (1 punkt) Głównym elementem programu jest
    // nieskończona pętla while(1).
    while (1) {

        printf("\nOpcje: w d D u s e\n");
        printf("Wybierz: ");
        scanf(" %c", &op);

        // (1 punkt) Instrukcja switch/case
        // do obsługi wyboru użytkownika.
        switch (op) {

            // (3 punkty) Opcja 'w' → wypisanie tablicy
            case 'w':
                wypisz(n);
                break;

            // (4 punkty) Opcja 'd' → dodawanie znaku
            case 'd':
                dodaj_d(&n);
                break;

            // (3 punkty) Opcja 'D' → dodawanie liczby
            case 'D':
                dodaj_D(&n);
                break;

            // (3 punkty) Opcja 'u' → usuwanie liczby
            case 'u':
                usun(&n);
                break;

            // (3 punkty) Opcja 's' → suma elementów
            case 's': {
                int wynik = suma(n);
                if (wynik == -1)
                    printf("Tablica jest pusta\n");
                else
                    printf("Suma = %d\n", wynik);
                break;
            }

            // (1 punkt) Opcja 'e' → zakończenie programu
            case 'e':
                return 0;

            default:
                printf("Nieznana opcja\n");
        }
    }
}
