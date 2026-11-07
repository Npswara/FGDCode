#include <stdio.h>

int main() {
    int angka = 50;
    int *ptr = &angka;

    // 1. Mengakses NILAI (Value)
    printf("Nilai dari variabel angka : %d\n", angka);
    printf("Nilai yang diakses lewat pointer: %d\n\n", *ptr); // Menggunakan *

    // 2. Mengakses ALAMAT (Address)
    printf("Alamat memori dari angka : %p\n", &angka); // Menggunakan &
    printf("Alamat memori yang disimpan pointer: %p\n", ptr);

    return 0;
}