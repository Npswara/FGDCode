//LATIHAN 2

#include <stdio.h>
#include <stdlib.h>

int main(){
    int nilai;
    system("CLEAR");

    printf("-- Program mencari nilai ---\n");
    printf("Masukan Nilai : ");
    scanf("%d", &nilai);

    if (nilai == 100)
    {
        printf("Nilai kamu A+");
    } else if (nilai >= 80)
    {
        printf("Nilai kamu A");
    } else if (nilai >= 70)
    {
        printf("Nilai kamu B");
    } else if (nilai >= 60)
    {
        printf("Nilai kamu C");
    } else {
        printf("Nilai kamu D");
    }

    return 0;
}