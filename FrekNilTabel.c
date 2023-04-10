#include <stdio.h>

int main() {
    int n;
    printf("Masukkan jumlah elemen: ");
    scanf("%d", &n);

    int T[n];
    printf("Masukkan %d elemen:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &T[i]);
    }

    // buat kamus untuk menyimpan frekuensi kemunculan setiap elemen
    int frekuensi[n];
    for (int i = 0; i < n; i++) {
        frekuensi[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        frekuensi[T[i]]++;
    }

    // tampilkan elemen-elemen yang frekuensi kemunculannya lebih dari satu
    printf("Elemen yang muncul lebih dari satu kali:\n");
    for (int i = 0; i < n; i++) {
        if (frekuensi[T[i]] > 1) {
            printf("%d\n", T[i]);
        }
    }

    return 0;
}