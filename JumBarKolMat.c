#include <stdio.h>

int main() {
    int n;
    printf("Masukkan ukuran matriks: ");
    scanf("%d", &n);
    
    int matrix[n][n];
    int row_sum[n] = {0};
    int col_sum[n] = {0};
    
    printf("Masukkan elemen matriks:\n");
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            scanf("%d", &matrix[i][j]);
            row_sum[i] += matrix[i][j];
            col_sum[j] += matrix[i][j];
        }
    }
    
    printf("\nJumlah semua elemen pada setiap baris:\n");
    for(int i=0; i<n; i++) {
        printf("Baris %d: %d\n", i+1, row_sum[i]);
    }
    
    printf("\nJumlah semua elemen pada setiap kolom:\n");
    for(int j=0; j<n; j++) {
        printf("Kolom %d: %d\n", j+1, col_sum[j]);
    }
    
    return 0;
}
