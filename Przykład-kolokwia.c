//Napisz program który będzie służył do wykonywania różnych operacji na pewnej tablicy znaków.

W programie powinna znajdować się zmienna globalna n informująca ile znaków znajduje się w tablicy.

Sama tablica powinna być zadeklarowana dla 100 znaków, ale nie powinna być globalna.

Głównym elementem funkcji main powinna być nieskończona pętla w której za pomocą istrukcji case/switch program prosi użytkownika o wybranie liczby odpowiadającej następnej akcji.

Jeśli użytkownik wybierze 0 program powinien zakończyć działanie.

Jeśli użytkownik wybierze 1 program powinien wywołać funkcję typu void która wypisze elementy tablicy, lub zwróci komunikat błędu jeśli n==0.

Jeśli użytkownik wybierze 2 program powinien wywołać funkcję typu void która sprawdzi czy w tablicy jest miejsce na nowy element. Jeśli tak to program poprosi użytkownika o podanie cyfry i wstawi ją do tablicy, jeśli nie ma miejsca lub znak podany przez użytkownika nie jest cyfrą program powinien zwrócić odpowiedni komunikat.

Jeśli użytkownik wybierze 3 program powninien wywołać funkcję typu void która poprosi o indeks elementu i usunie go z tablicy oraz zmniejszy zmienną n o jeden, jednocześnie przesuwając pozostałe elementy tak, aby tablica po wywołaniu zawierała wszystkie pozostałe elementy znajdowały się na n pierwszych miejscach zachowując oryginalną kolejność.

Jeśli użytkownik wybierze 4 program powinien wywołać funkcję typu int która zwróci sumę cyfr reprezentowanych przez znaki w tablicy, program główny powinien wypisać tę sumę na ekran. Jeśli funkcja zostanie wywołana dla kiedy tablica posiada 0 znaków funkcja powinna zwrócić liczbę która pozwoli programowi głównemu zwrócić odpowiedni komunikat zamiast Suma=0.

Jeśli użytkownik wybierze 5 program powinien wywołać funkcję typu void która wypisze elementy listy jako drzewo binarne, tzn. w pierwszym wierszu powinien być wypisany 1 element, w drugim 2, w trzecim 4 itd. pierwyszy wiersz powinien być wyśrodkowany na jedynym elemencie, pozostałe powinny być wypisane tak aby zachować struktórę przypominającą trójkąt równoboczny.

Jeśli użytkownik wybierze coś innego niż przewidziano w powyższych krokach program powinien poinformować go o błędnym wyborze i ponownie przedstawić dostępne opcje.

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
