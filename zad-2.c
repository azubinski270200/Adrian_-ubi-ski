//Napisz program który wczyta od użytkownika parę liczb naturalnych a,b i zwróci wynik działania a do potęgi b. W rozwiązaniu nie kożystaj z potęgowania.

#include <stdio.h>
int main(){
int a, b, wynik = 1, i;

printf("Podaj pare liczb: ");
scanf("%d %d", &a, &b);

for(i = 0; i < b; i++){

wynik = wynik * a;

}
printf("%d\n", wynik);
return 0;



}