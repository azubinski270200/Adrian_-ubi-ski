//Napisz program który pobierze od użytkownika trzy liczby (dzień, miesiąc, rok) i sprawdzi czy tworzą poprawną datę.
#include <stdio.h>
int main(){
int d, m, r;

printf("Podaj date: ");
scanf("%d %d %d", &d, &m, &r);

if(d >= 1 && d <= 31 && m >= 1 && m <= 12 && r > 0)
    printf("Poprawna data");

    else {printf("Niepoprawna data");}
return 0;

}
