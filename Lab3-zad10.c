// Napisz program który pobierze od użytkownika długości trzech odcinków i sprawdzi czy można z nich utworzyć trójkąt.

#include <stdio.h>
int main(){
int a, b, c;

printf("Podaj trzy odcinki: ");
scanf("%d %d %d", &a, &b, &c);

if(a + b > c && a + c > b && b + c > a)
    printf("Mozna");
else{ printf("Nie mozna"); }

return 0;
}

