#include <stdio.h>

int main() {
    int N;
    
    // Input nilai N
    printf("Masukkan nilai N: ");
    scanf("%d", &N);
    
    // Proses berdasarkan kondisi N > 50
    if (N > 50) {
        N = N - 25;
    } 
    
    N = N + 10;
    
    // Output hasil akhir N
    printf("Nilai N: %d\n", N);
    
    return 0;
}

