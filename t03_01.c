#include <stdio.h> // Untuk fungsi input/output seperti printf dan scanf

int main() {
    int n;
    int i;
    long long sum = 0; // Menggunakan long long untuk menampung jumlah yang mungkin besar
    double average;

    // Membaca nilai 'n'
    // Validasi input bilangan bulat positif
    do {
        // Asumsi input valid (bilangan bulat) karena tidak ada instruksi error handling spesifik untuk non-integer
        // Hanya memastikan n > 0
        scanf("%d", &n);
    } while (n <= 0); // Memastikan n adalah bilangan bulat positif

    // Membaca 'n' buah nilai dan menghitung jumlahnya
    for (i = 0; i < n; i++) {
        int value;
        // Validasi input bilangan bulat positif untuk setiap nilai
        do {
            scanf("%d", &value);
        } while (value < 0); // Memastikan setiap nilai adalah bilangan bulat non-negatif
        sum += value;
    }

    // Menghitung rata-rata
    // Menggunakan (double)sum untuk memastikan perhitungan floating point
    average = (double)sum / n;

    // Menampilkan jumlah seluruh nilai
    printf("%lld\n", sum);

    // Menampilkan nilai rata-rata dengan 2 digit presisi di belakang koma
    printf("%.2f\n", average);

    return 0; // Menandakan program berakhir dengan sukses
}