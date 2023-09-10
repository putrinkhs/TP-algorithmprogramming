#include <stdio.h>
#include <math.h>

int main() {
    float jarakKm;
    int jarakM, jarakCm;
    char lanjut;

    printf("\n==================================================\n");
    printf("\x1b[32m============= Program Konversi Jarak =============\x1b[0m");
    printf("\n==================================================\n");

    while (1) {
        printf("\nMasukkan jarak dalam kilometer (km)       : ");
        scanf("%f", &jarakKm);

        jarakM = round(jarakKm * 1000);
        jarakCm = round(jarakM * 100);

        getchar();
        printf("Tekan Enter untuk melihat hasil konversi...");
        getchar();

        printf("\n================= Hasil Konversi =================\n\n");
        printf("%d kilometer (km) = %d meter (m)\n", (int)jarakKm, jarakM);
        printf("%d kilometer (km) = %d sentimeter (cm)\n", (int)jarakKm, jarakCm);

        printf("\nApakah ingin melanjutkan konversi? (y/n)  : ");
        scanf(" %c", &lanjut);
        printf("\n==================================================\n");

        if (lanjut != 'y' && lanjut != 'Y') {
            break;
        }
    }

    return 0;
}
