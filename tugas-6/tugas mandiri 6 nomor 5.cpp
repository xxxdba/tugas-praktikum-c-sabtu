#include <stdio.h>

int main() {
    double saldo = 1000000; // Saldo awal
    double bunga = 0.02;    // Bunga 
    int bulan;

    for (bulan = 1; bulan <= 10; bulan++) {
        saldo += saldo * bunga; 
    }

    printf("Jumlah uang setelah 10 bulan adalah Rp. %.2f\n", saldo);

    return 0;
}

