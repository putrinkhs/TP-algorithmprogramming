#include <stdio.h>

int main() {
    char pengulangan = 'y';
    int i = 0;
    unsigned int subtotal = 0, total = 0, totalsebelumdiskon = 0, diskonnominal = 0, diskontransaksi = 0;
    
        printf("\n========================================================\n");
        printf("\x1b[32m================ Program Diskon Belanja ================\x1b[0m");
        printf("\n========================================================\n\n");
 
    while (pengulangan != 'n' && pengulangan != 'N') {
        i++;
        
        printf("Masukkan nominal transaksi %d   : Rp.", i);
        scanf(" %u", &subtotal);
        totalsebelumdiskon = totalsebelumdiskon + subtotal;
        if (subtotal >= 1000000) {
            printf("Selamat! Anda mendapatkan diskon 30%% senilai Rp.%u\n", subtotal * 3 / 10);
            diskonnominal = diskonnominal + subtotal * 3 / 10;
            subtotal = subtotal * 7 / 10;
        } else if (subtotal >= 500000) {
            printf("Selamat! Anda mendapatkan diskon 20%% senilai Rp.%u\n", subtotal * 2 / 10);
            diskonnominal = diskonnominal + subtotal * 2 / 10;
            subtotal = subtotal * 8 / 10;
        } else if (subtotal >= 200000) {
            printf("Selamat! Anda mendapatkan diskon 10%% senilai Rp.%u\n", subtotal * 1 / 10);
            diskonnominal = diskonnominal + subtotal * 1 / 10;
            subtotal = subtotal * 9 / 10;
        }
        if (i % 4 == 0) {
            printf("Selamat! Anda mendapatkan diskon tambahan 20%% senilai Rp.%u\n", subtotal * 2 / 10);
            diskontransaksi = diskontransaksi + subtotal * 2 / 10;
            subtotal = subtotal * 8 / 10;
        }
        printf("Apakah anda ingin berbelanja lagi? (y/n): ");
        scanf(" %c", &pengulangan);
        while (pengulangan != 'y' && pengulangan != 'Y' && pengulangan != 'n' && pengulangan != 'N') {
            printf("Apakah anda ingin berbelanja lagi? (y/n): ");
            scanf(" %c", &pengulangan);
        }
        total += subtotal;
    }
    
    printf("\n=================== Detail Transaksi ===================\n\n");
    printf("Total belanja sebelum diskon            : Rp.%u \n", totalsebelumdiskon);
    printf("Total diskon dari nominal belanja       : Rp.%u \n", diskonnominal);
    printf("Total diskon dari banyaknya transaksi   : Rp.%u \n", diskontransaksi);
    printf("Total belanja yang harus di bayar       : Rp.%u", total);
    
    printf("\n\n========================================================");
    printf("\n============= Terimakasih telah Berbelanja =============");
    printf("\n========================================================\n");
    
    return 0;
}
