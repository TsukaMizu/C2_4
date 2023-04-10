#include <stdio.h>

int main() {
    int n1, n2;
    printf("Masukkan jumlah elemen T1: ");
    scanf("%d", &n1);
    printf("Masukkan jumlah elemen T2: ");
    scanf("%d", &n2);

    // cek apakah jumlah elemen di T1 dan T2 sama
    if (n1 != n2) {
        printf("T1 dan T2 tidak simetris.\n");
        return 0;
    }

    int T1[n1], T2[n2];

    printf("Masukkan %d elemen T1:\n", n1);
    for (int i = 0; i < n1; i++) {
        scanf("%d", &T1[i]);
    }

    printf("Masukkan %d elemen T2:\n", n2);
    for (int i = 0; i < n2; i++) {
        scanf("%d", &T2[i]);
    }

    // cek apakah nilai pada setiap elemen di T1 dan T2 sama
    for (int i = 0; i < n1; i++) {
        if (T1[i] != T2[i]) {
            printf("T1 dan T2 tidak simetris.\n");
            return 0;
        }
    }

    printf("T1 dan T2 simetris.\n");

    return 0;
}
