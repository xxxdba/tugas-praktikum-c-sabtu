#include <stdio.h>
#include <math.h>

int main() {
    // Deklarasi variabel
    float alas, tinggi, miring;

    // Inisialisasi nilai alas dan tinggi
    printf("Panjang alas segitiga: 4 cm\n");
    printf("Tinggi segitiga: 5 cm\n");
    alas = 4.0;
    tinggi = 5.0;

    // Rumus Phitagoras
    miring = sqrt(pow(alas, 2) + pow(tinggi, 2));

    // Tampilkan hasil
    printf("Panjang sisi miring segitiga adalah: %.2f cm\n", miring);

    return 0;
}
