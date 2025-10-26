#include <stdio.h>
#include <ctype.h>

int main() {
    char znak;
    printf("Podaj znak ASCII: ");
    scanf(" %c", &znak);
    if (isalpha(znak))
    printf("To litera alfabetu.\n");
else
printf("To nie jest litera alfabetu.\n");
return 0;
}