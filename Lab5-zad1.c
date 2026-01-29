//Napisz program który dla podanej liczby naturalnej n zwróci sumę kwadratów liczb od 1 do n.
#include <stdio.h>
int main(){
int i, suma = 0, n;

printf("Podaj liczbe naturalna: ");
scanf("%d", &n);

for(i = 1; i <= n; i++){
    suma = suma + i * i;}

    printf("%d\n", suma);
    return 0;




}
