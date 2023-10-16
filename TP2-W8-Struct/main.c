#include <stdio.h>

// Mendefinisikan struktur
struct Point {
    int x;
    int y;
};

int main() {
    // Membuat objek dari struktur Point
    struct Point p;

    // Mengisi data ke objek
    p.x = 5;
    p.y = 10;

    // Mengakses dan menampilkan data
    printf("Koordinat x: %d\n", p.x);
    printf("Koordinat y: %d\n", p.y);

    return 0;
}
