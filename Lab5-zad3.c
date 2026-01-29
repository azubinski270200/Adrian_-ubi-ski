#include <stdio.h>
int main(){
int a, b, c =0, potega = 1;

printf("Podaj dwie liczby:\n");
scanf("%d %d", &a, &b);

while(potega <= b){

    potega = potega * a;
    c++;
}
printf("%d", c);
return 0;

}
