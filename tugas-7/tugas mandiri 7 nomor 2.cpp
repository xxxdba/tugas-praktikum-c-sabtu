#include <stdio.h>

int main() {
    int A[11] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35}; // Data awal
    int B[11] = {0}; // Array untuk menyimpan nilai genap, diinisialisasi dengan 0
    int i, j = 0;

    printf("Data awal:\n");
    for (i = 0; i < 11; i++) {
        printf("%d ", A[i]);
    }

    // Memproses data untuk menyimpan hanya nilai genap
    for (i = 0; i < 11; i++) {
        if (A[i] % 2 == 0) { // Cek jika nilai genap
            B[j] = A[i];
            j++;
        }
    }

    printf("\n\nArray setelah menyimpan nilai genap:\n");
    for (i = 0; i < 11; i++) {
        printf("%d ", B[i]);
    }

    return 0;
}

