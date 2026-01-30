#include <stdio.h>
#include <ctype.h>

// Globalna tablica
int tab[20];

/* Deklaracje funkcji */
void wypisz(int n);
void dodaj_d(int *n);
void dodaj_D(int *n);
void usun(int *n);
int suma(int n);

int main()
{
    int n = 0;     // liczba elementow w tablicy
    char op;

    while (1)
    {
        printf("\nOpcje: w d D u s e\n");
        printf("Wybierz: ");
        scanf(" %c", &op);

        switch (op)
        {
        case 'w':
            wypisz(n);
            break;

        case 'd':
            dodaj_d(&n);
            break;

        case 'D':
            dodaj_D(&n);
            break;

        case 'u':
            usun(&n);
            break;

        case 's':
        {
            int wynik = suma(n);

            if (wynik < 0)
                printf("Tablica jest pusta\n");
            else
                printf("Suma = %d\n", wynik);

            break;
        }

        case 'e':
            return 0;

        default:
            printf("Nieznana opcja\n");
        }
    }

    return 0;
}

/* ===== FUNKCJE ===== */

void wypisz(int n)
{
    // TODO: wypisz tablice
}

void dodaj_d(int *n)
{
    // TODO: dodaj znak
}

void dodaj_D(int *n)
{
    // TODO: dodaj liczbe
}

void usun(int *n)
{
    // TODO: usun elementy
}

int suma(int n)
{
    // TODO: policz sume
    return -1;
}
