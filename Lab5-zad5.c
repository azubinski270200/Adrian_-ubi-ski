//Napisz program który dla podanej liczby n wczyta od użytkownika n liczb i stworzy z nich tablicę.

#include <stdio.h>
int main(){
int n, i, suma = 0;

printf("Podaj liczbe: ");
scanf("%d", &n);

for(i = 1; i <= n; i++) {

    suma = suma + i * i;
}
    printf("%d\n", suma);
    return 0;


}
