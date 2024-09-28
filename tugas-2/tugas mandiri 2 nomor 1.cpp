#include <stdio.h>

int main() {
    // Deklarasi variabel
    float alas, tinggi, luas;

    // Inisialisasi nilai alas dan tinggi
    printf("Panjang alas segitiga: 8 cm\n");
    printf("Tinggi segitiga: 5 cm\n");
    alas = 8.0;
    tinggi = 5.0;

    // Rumus luas segitiga
    luas = (alas * tinggi) / 2.0;

    // Tampilkan hasil
    printf("Luas segitiga adalah: %.2f cm^2\n", luas);

    return 0;
}
