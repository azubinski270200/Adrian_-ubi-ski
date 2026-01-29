//Napisz program który pobierze od użytkownika dwie liczby i zwróci większą z nich.
#include <stdio.h>
int main(){

int a, b;

printf("Podaj dwie liczby: ");
scanf("%d %d", &a, &b);

if(a > b){
    printf("Wieksza liczba to: %d", a);

}
else {printf("Wieksza liczba to: %d", b);}
return 0;
}
