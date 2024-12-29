#include <stdio.h>

int main() {
    int nilai[10]; // Array untuk menyimpan 10 nilai mahasiswa
    int i;

    printf("Masukkan 10 nilai mahasiswa:\n");

    // Input nilai mahasiswa ke dalam array
    for (i = 0; i < 10; i++) {
        printf("Nilai mahasiswa ke-%d: ", i + 1);
        scanf("%d", &nilai[i]);
    }

    printf("\nDaftar nilai mahasiswa yang lulus (nilai >= 60):\n");

    // Cek dan cetak nilai yang lulus
    for (i = 0; i < 10; i++) {
        if (nilai[i] >= 60) {
            printf("Mahasiswa ke-%d: %d\n", i + 1, nilai[i]);
        }
    }

    return 0;
}

