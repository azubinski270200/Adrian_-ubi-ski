//Napisz program który pobierze od użytkownika sześć liczb (dzień1, miesiąc1, rok1, dzień2, miesiąc2, rok2) i obliczy ile lat, miesięcy i dni różni reprezentowanie przez nie daty.
#include <stdio.h>
int main(){
int d1, d2, m1, m2, r1, r2;

printf("Podaj pierwsza date: ");
scanf("%d %d %d", &d1, &m1, &r1);

printf("Podaj druga date: ");
scanf("%d %d %d", &d2, &m2, &r2);

printf("Roznica dni: %d\n", d2 - d1);
printf("Roznica miesiecy: %d\n", m2 - m1);
printf("Roznica lat: %d\n", r2 - r1);

return 0;


}
