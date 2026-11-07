//Latihan 3 Membuat Bintang

#include <stdio.h>
#include <stdlib.h>

int main(){
    int bilangan;
    system("CLEAR");

    printf("Masukan bilangn : ");
    scanf("%d", &bilangan);

    
    for (int i = 0; i < bilangan; i++)
    {
        for (int j = i; j < bilangan; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 0; i < bilangan; i++) {
        for (int j = 0; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    

}