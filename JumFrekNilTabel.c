#include <stdio.h>

int main() {
    int n,i;
    printf("Masukkan jumlah elemen: ");
    scanf("%d", &n);

    int T[n];
    printf("Masukkan %d elemen:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &T[i]);
    }

    // buat kamus untuk menyimpan frekuensi kemunculan setiap elemen
    int frekuensi[n];
    for (i = 0; i < n; i++) {
        frekuensi[i] = 0;
    }

    for (i = 0; i < n; i++) {
        frekuensi[T[i]]++;
    }

    // hitung jumlah nilai-nilai elemen tabel T yang frekuensi kemunculannya lebih dari satu
    int jumlah = 0;
    for ( i = 0; i < n; i++) {
        if (frekuensi[T[i]] > 1) {
            jumlah += T[i];
        }
    }

    // tampilkan jumlah nilai-nilai elemen tabel T yang frekuensi kemunculannya lebih dari satu
    printf("Jumlah nilai-nilai elemen tabel T yang frekuensi kemunculannya lebih dari satu kali: %d\n", jumlah);

    return 0;
}
