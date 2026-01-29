//Napisz program, który będzie służył do wykonywania różnych operacji na pewnej tablicy liczb.

(1 punkt) W funkcji main powinna się znajdować zmienna lokalna n informująca, ile znaków znajduje się w tablicy.

(1 punkt) Sama tablica powinna być zadeklarowana dla 20 liczb i powinna mieć globalny zasięg.

(1 punkt) Głównym elementem funkcji main powinna być nieskończona pętla, w której za pomocą instrukcji case/switch program prosi użytkownika o wybranie znaku odpowiadającemu następnej akcji.

(1 punkt) Jeśli użytkownik wybierze e program powinien zakończyć działanie.

(3 punkty) Jeśli użytkownik wybierze w program powinien wywołać funkcję typu void, która wypisze elementy tablicy, lub zwróci komunikat błędu, jeśli n == 0.

(4 punkty) Jeśli użytkownik wybierze d program powinien wywołać funkcję typu void, która sprawdzi czy w tablicy jest miejsce na nowy element. Jeśli tak to program poprosi użytkownika o podanie znaku (char). Jeśli podany znak jest cyfrą program powinien wstawić do tablicy liczbę odpowiadającą danej cyfrze. Jeśli podany został inny znak program powinien wstawić do tablicy kod ASCII tego znaku.

(3 punkty) Jeśli użytkownik wybierze D program powinien zachować się analogicznie jak dla opcji d. Tutaj zakładamy, że użytkownik może podać dowolną liczbę, zakładamy, że zostanie ona podana poprawnie.

(3 punkty) Jeśli użytkownik wybierze u program powinien wywołać funkcję typu void, która poprosi o podanie liczby i usunie wszystkie jej wystąpienia z tablicy oraz zmniejszy zmienną n odpowiednio, jednocześnie przesuwając pozostałe elementy tak, aby tablica po wywołaniu zawierała wszystkie pozostałe elementy znajdujące się na n pierwszych miejscach zachowując oryginalną kolejność.

(3 punkty) Jeśli użytkownik wybierze s program powinien wywołać funkcję typu int, która wypisze na ekran sumę wszystkich liczb w tablicy. Jeśli funkcja zostanie wywołana, kiedy tablica jest pusta funkcja powinna zwrócić liczbę, która pozwoli programowi głównemu zwrócić odpowiedni komunikat zamiast wypisać 0.


#include <stdio.h>
#include <ctype.h>

int tab[20];   // globalna tablica na 20 liczb

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

void dodaj_d(int *n) {
    char c;
    if (*n >= 20) {
        printf("Brak miejsca w tablicy\n");
        return;
    }

    printf("Podaj znak: ");
    scanf(" %c", &c);

    if (isdigit(c))
        tab[*n] = c - '0';
    else
        tab[*n] = c;

    (*n)++;
}

void dodaj_D(int *n) {
    int x;
    if (*n >= 20) {
        printf("Brak miejsca w tablicy\n");
        return;
    }

    printf("Podaj liczbe: ");
    scanf("%d", &x);
    tab[*n] = x;
    (*n)++;
}

void usun(int *n) {
    int x, j = 0;
    if (*n == 0) {
        printf("Tablica jest pusta\n");
        return;
    }

    printf("Podaj liczbe do usuniecia: ");
    scanf("%d", &x);

    for (int i = 0; i < *n; i++) {
        if (tab[i] != x) {
            tab[j++] = tab[i];
        }
    }
    *n = j;
}

int suma(int n) {
    if (n == 0)
        return -1;

    int s = 0;
    for (int i = 0; i < n; i++)
        s += tab[i];

    return s;
}

int main() {
    int n = 0;     // liczba elementów w tablicy
    char op;

    while (1) {
        printf("\nOpcje: w d D u s e\n");
        printf("Wybierz: ");
        scanf(" %c", &op);

        switch (op) {
            case 'w': wypisz(n); break;
            case 'd': dodaj_d(&n); break;
            case 'D': dodaj_D(&n); break;
            case 'u': usun(&n); break;
            case 's': {
                int wynik = suma(n);
                if (wynik == -1)
                    printf("Tablica jest pusta\n");
                else
                    printf("Suma = %d\n", wynik);
                break;
            }
            case 'e': return 0;
            default: printf("Nieznana opcja\n");
        }
    }
}
