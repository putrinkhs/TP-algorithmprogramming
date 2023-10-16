#include <stdio.h>

// Mendefinisikan union untuk tipe data yang berbeda
union Data {
    int angka;
    double desimal;
};

int main() {
    // Membuat objek dari union Data
    union Data data1;

    // Mengisi data ke objek dengan angka
    data1.angka = 42;

    // Mengakses dan menampilkan data sebagai angka
    printf("Nilai Angka     : %d\n", data1.angka);

    // Mengisi data ke objek dengan desimal
    data1.desimal = 3.14;

    // Mengakses dan menampilkan data sebagai desimal
    printf("Nilai Desimal   : %.2f\n", data1.desimal);

    return 0;
}
