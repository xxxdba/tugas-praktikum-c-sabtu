#include <stdio.h>

int main() {
    int kode;
    char jenis;
    float harga, diskon, hargaSetelahDiskon;

    printf("Masukkan kode barang: ");
    scanf("%d", &kode);
    printf("Masukkan jenis barang (A/B/C): ");
    scanf(" %c", &jenis);
    printf("Masukkan harga barang: ");
    scanf("%f", &harga);

    if (jenis == 'A') {
        diskon = 0.10;
    } else if (jenis == 'B') {
        diskon = 0.15;
    } else if (jenis == 'C') {
        diskon = 0.20;
    } else {
        printf("Jenis barang tidak valid.\n");
        return 1;
    }

    hargaSetelahDiskon = harga - (harga * diskon);
    printf("Jenis barang %c mendapat diskon = %.0f%%, Harga setelah didiskon = %.2f\n", jenis, diskon * 100, hargaSetelahDiskon);

    return 0;
}

