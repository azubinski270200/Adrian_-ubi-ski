// Napisz program który pobierze od użytkownika trzy liczby i zwróci największą liczbę.
#include <stdio.h>

int main(){

int a, b, c;

printf("Podaj trzy liczby: ");
scanf("%d %d %d", &a, &b, &c);

if(a > b && a > c){
            printf("Najwieksza liczba to: %d", a);}

            else if(b > a && b > c) {
                printf("Najwieksza liczba to: %d", b);
            }
         else {printf("Najwieksza liczba to: %d", c);}

}
