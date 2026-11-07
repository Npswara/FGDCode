//LATIHAN 1

#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b;
    system("CLEAR");

    printf("Masukan nilai A: ");
    scanf("%d", &a);
    printf("Masukan nilai B: ");
    scanf("%d", &b);

    printf("\n ----- HASIL PENJUMLAHAN -----\n");
    printf("A ditambah b = %d \n A dikurang b = %d \n A dikali b = %d \n A dibagi b = %d \n A modulo b = %d ", a+b, a-b, a*b, a/b, a%b);

    return 0;
}