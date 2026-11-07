#include <stdio.h>
#include <stdlib.h>

int main(){
    char nama[100];
    int array[5];
    system("CLEAR");
    int bil_terbesar = 0;

    printf("\n-- Program FGD Ke 4 ---\n");
    printf("\nMasukan Nama Anda: ");
    fgets(nama, sizeof(nama), stdin);

    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Masukan nilai array ke - %d = ", i+1);
        scanf("%d", &array[i]);
        if (bil_terbesar < array[i])
        {
            bil_terbesar = array[i];
        }
        
    }
    
    printf("\nNama User = %s", nama);
    printf("Bilangan Terbesar = %d\n", bil_terbesar);
}