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

    // Deklarasi array untuk menyimpan 'n' buah nilai
    // Ukuran array harus dinamis atau cukup besar jika 'n' bisa sangat besar
    // Untuk contoh ini, kita asumsikan 'n' tidak terlalu besar, atau menggunakan C99 VLA (Variable Length Array)
    // Jika menggunakan C89, array harus berukuran statis maksimum.
    int values[n]; // C99 Variable Length Array

    // Membaca 'n' buah nilai dan menghitung jumlahnya, serta menyimpannya dalam array
    for (i = 0; i < n; i++) {
        int value;
        // Validasi input bilangan bulat non-negatif
        do {
            scanf("%d", &value);
        } while (value < 0); // Memastikan setiap nilai adalah bilangan bulat non-negatif
        values[i] = value; // Simpan nilai ke dalam array
        sum += value;
    }

    // Menghitung rata-rata
    // Menggunakan (double)sum untuk memastikan perhitungan floating point
    average = (double)sum / n;

    // Menghitung banyaknya nilai yang di atas atau sama dengan rata-rata
    int count_above_average = 0;
    for (i = 0; i < n; i++) {
        if (values[i] >= average) {
            count_above_average++;
        }
    }

    // Menampilkan jumlah seluruh nilai
    printf("%lld\n", sum);

    // Menampilkan nilai rata-rata dengan 2 digit presisi di belakang koma
    printf("%.2f\n", average);

    // Menampilkan banyaknya nilai yang di atas atau sama dengan rata-rata
    printf("%d\n", count_above_average);

    return 0; // Menandakan program berakhir dengan sukses
}