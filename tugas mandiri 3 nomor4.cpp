#include <stdio.h>

int main() {
    // Variabel
    int bilangan;

    // Input 
    printf("Masukkan sebuah bilangan bulat positif: ");
    scanf("%d", &bilangan);

    // Proses dan Output
    if (bilangan % 2 == 0) {
        printf("Bilangan tersebut adalah GENAP.\n");
    } else {
        printf("Bilangan tersebut adalah GANJIL.\n");
    }

    return 0;
}

