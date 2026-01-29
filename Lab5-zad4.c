#include <stdio.h>
int main(){
int tab[] = {1,2,3,4,5,6,7,8,9,10}, n = 10, i, kwadraty[10];

for(i = 0; i < n; i++){

    kwadraty[i] = tab[i] * tab[i];

    printf("%d\n", kwadraty[i]);
}


return 0;

}
