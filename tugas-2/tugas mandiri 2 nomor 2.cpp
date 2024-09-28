#include <stdio.h>
#include <math.h>

int main() {
    // Deklarasi variabel
    float diameter, radius, volume;

    // Inisialisasi nilai diameter
    printf("Diameter bola: 15 cm\n");
    diameter = 15.0;

    // Hitung radius
    radius = diameter / 2.0;

    // Rumus volume bola
    volume = (4.0/3.0) * M_PI * pow(radius, 3);

    // Tampilkan hasil
    printf("Volume bola adalah: %.2f cm^3\n", volume);

    return 0;
}
