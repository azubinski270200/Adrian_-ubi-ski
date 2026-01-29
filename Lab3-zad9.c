// Napisz program który pobierze od użytkownika dwie pary liczb reprezentujące przeciwległe wierzchołki prostokąta i na ich podstawie wyznaczy pole i obwód tego prostokąta.
#include <stdio.h>
int main(){
int x1, y1, x2, y2;


printf("Podaj pierwsza pare wierzcholkow: ");
scanf("%d %d", &x1, &y1);

printf("Podaj druga pare wierzcholkow: ");
scanf("%d %d", &x2, &y2);

printf("Pole trojkata: %d\n", x1 * x2);
printf("Obwod trojkata: %d\n", 2 * (y1 + y2));

return 0;



}
