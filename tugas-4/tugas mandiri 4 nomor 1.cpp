#include <stdio.h>

int main() {
    int bilangan;

    // Input bilangan bulat positif
    printf("Masukkan sebuah bilangan bulat positif: ");
    scanf("%d", &bilangan);

    // Periksa apakah bilangan adalah positif
    if (bilangan < 0) {
        printf("Masukkan bilangan positif!\n");
    } else {
        // Cek apakah bilangan ganjil atau genap
        if (bilangan % 2 == 0) {
            printf("GENAP\n");
        } else {
            printf("GANJIL\n");
        }
    }

    return 0;
}