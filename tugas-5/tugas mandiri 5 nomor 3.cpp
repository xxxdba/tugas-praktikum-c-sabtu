#include <stdio.h>

int main() {
    int jamMasuk, jamKeluar, lamaParkir, biaya;

    printf("Masukkan jam masuk (1-12): ");
    scanf("%d", &jamMasuk);
    printf("Masukkan jam keluar (1-12): ");
    scanf("%d", &jamKeluar);

    if (jamKeluar >= jamMasuk) {
        lamaParkir = jamKeluar - jamMasuk;
    } else {
        lamaParkir = (12 - jamMasuk) + jamKeluar;
    }

    if (lamaParkir <= 2) {
        biaya = 2000;
    } else {
        biaya = 2000 + (lamaParkir - 2) * 500;
    }

    printf("Lama parkir %d jam, Biaya = %d\n", lamaParkir, biaya);

    return 0;
}

