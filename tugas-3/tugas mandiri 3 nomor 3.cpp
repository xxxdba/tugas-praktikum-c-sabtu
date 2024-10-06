#include <stdio.h>
#include <math.h>

int main() {
    // Variabel
    float alas, tinggi, sisi_miring;

    // Input
    printf("Masukkan panjang sisi alas segitiga (cm): ");
    scanf("%f", &alas);
    printf("Masukkan panjang sisi tinggi segitiga (cm): ");
    scanf("%f", &tinggi);

    // Proses
    sisi_miring = sqrt((alas * alas) + (tinggi * tinggi));

    // Output 
    printf("Panjang sisi miring segitiga adalah: %.2f cm\n", sisi_miring);

    return 0;
}

