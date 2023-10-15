#include <stdio.h>
#include <string.h>

// Fungsi ini menghitung jumlah vokal (a, e, i, o, u) dalam sebuah string.
int countVowels(char *str) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char c = str[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            count++;
        }
    }
    return count;
}

// Fungsi ini menghitung jumlah karakter non-vokal dalam sebuah string.
int countConsonants(char *str) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char c = str[i];
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' &&
                c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U') {
                count++;
            }
        }
    }
    return count;
}

int main() {
    printf("=================================================\n");
    printf("Program Menyebutkan Nama Bulan Berdasarkan Awalan\n");
    printf("=================================================\n");

    char input;
    printf("Masukkan huruf A - Z: ");
    scanf(" %c", &input);

    if ((input >= 'A' && input <= 'Z') || (input >= 'a' && input <= 'z')) {
        char *months[] = {
            "January", "February", "March", "April", "May", "June",
            "July", "August", "September", "October", "November", "December"
        };

        int found = 0;
        printf("\nBulan yang diawali dengan huruf '%c':\n", input);
        for (int i = 0; i < 12; i++) {
            if (months[i][0] == input || months[i][0] == (input - 32)) {
                printf("  - %s\n", months[i]);
                found = 1;
            }
        }

        if (found) {
            char choice[20];
            printf("\nPilih nama bulan yang Anda inginkan dari daftar di atas: ");
            scanf("%s", choice);

            int validChoice = 0;
            for (int i = 0; i < 12; i++) {
                if (strcmp(choice, months[i]) == 0) {
                    int vowels = countVowels(months[i]);
                    int consonants = countConsonants(months[i]);
                    printf("\nAnda telah memilih bulan: %s\n", months[i]);
                    printf("Jumlah vokal            : %d\n", vowels);
                    printf("Jumlah konsonan         : %d\n", consonants);
                    validChoice = 1;
                    break;
                }
            }

            if (!validChoice) {
                printf("\nMaaf, pilihan nama bulan Anda tidak valid!\n");
            }
        } else {
            printf("\nMaaf, tidak ada bulan yang diawali dengan huruf '%c'.\n", input);
        }
    } else {
        printf("\nMaaf, input tidak valid. Harap masukkan huruf A - Z.\n");
    }

    printf("\nSelesai! Terima kasih telah menggunakan program ini.\n");

    return 0;
}
