// Napisz program który pobierze od użytkownika znak ASCII (char) lub kod ASCII (int) i sprawdzi czy jest on literą alfabetu.
#include <stdio.h>


int main(){

char c;
printf("Podaj znak: ");
scanf("%c", &c);

if(c >= 'A' && c<= 'Z' || c >= 'a' && c <= 'z'){
    printf("Jest to litera alfabetu");

}
else {printf("Nie jest to litera alfabetu");}
return 0;
}
