#include <stdio.h>
int main(){
int a, b, i, wynik = 1;

printf("Podaj dwie liczby: ");
scanf("%d %d", &a, &b);

for(i = 0; i < b; i++){
    wynik = wynik *a;
}
printf("%d\n", wynik);

return 0;


}
