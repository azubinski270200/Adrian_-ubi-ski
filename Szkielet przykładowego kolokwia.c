#include <stdio.h>
#include <ctype.h>

/* Zmienna globalna – liczba elementow */
int n = 0;

/* Deklaracje funkcji */
void wypisz(char tab[]);
void dodaj(char tab[]);
void usun(char tab[]);
int suma(char tab[]);
void drzewo(char tab[]);

int main()
{
    char tab[100];
    int wybor;

    while (1)
    {
        printf("\nMENU:\n");
        printf("0 - wyjscie\n");
        printf("1 - wypisz tablice\n");
        printf("2 - dodaj cyfre\n");
        printf("3 - usun element\n");
        printf("4 - suma cyfr\n");
        printf("5 - wypisz jako drzewo\n");
        printf("Wybor: ");

        scanf("%d", &wybor);

        switch (wybor)
        {
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

        case 4:
        {
            int s = suma(tab);

            if (s < 0)
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

    return 0;
}

/* ===== FUNKCJE ===== */

void wypisz(char tab[])
{
    // TODO: wypisz elementy tablicy
}

void dodaj(char tab[])
{
    // TODO: dodaj cyfre do tablicy
}

void usun(char tab[])
{
    // TODO: usun element po indeksie
}

int suma(char tab[])
{
    // TODO: oblicz sume cyfr
    return -1;
}

void drzewo(char tab[])
{
    // TODO: wypisz tablice jako drzewo
}
