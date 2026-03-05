#include <stdio.h>   // Untuk fungsi input/output seperti printf dan scanf
#include <limits.h>  // Untuk INT_MAX dan INT_MIN, digunakan untuk inisialisasi nilai maksimum dan minimum

int main() {
    int n;
    int i;
    long long sum = 0; // Menggunakan long long untuk menampung jumlah yang mungkin besar
    double average;
    int max_val = INT_MIN; // Inisialisasi nilai maksimum dengan nilai integer terkecil
    int min_val = INT_MAX; // Inisialisasi nilai minimum dengan nilai integer terbesar
    
    // Membaca nilai 'n'
    // Validasi input bilangan bulat positif
    do {
        // Asumsi input valid (bilangan bulat) karena tidak ada instruksi error handling spesifik untuk non-integer
        // Hanya memastikan n > 0
        scanf("%d", &n);
    } while (n <= 0); // Memastikan n adalah bilangan bulat positif

    // Deklarasi array untuk menyimpan 'n' buah nilai
    // Menggunakan C99 Variable Length Array (VLA).
    // Jika menggunakan C89, array harus berukuran statis maksimum atau dialokasikan secara dinamis.
    int values[n]; 

    // Membaca 'n' buah nilai, menghitung jumlahnya, menyimpan dalam array, dan mencari min/max
    for (i = 0; i < n; i++) {
        int value;
        // Validasi input bilangan bulat non-negatif
        do {
            scanf("%d", &value);
        } while (value < 0); // Memastikan setiap nilai adalah bilangan bulat non-negatif
        
        values[i] = value; // Simpan nilai ke dalam array
        sum += value;      // Tambahkan ke jumlah total

        // Update nilai maksimum
        if (value > max_val) {
            max_val = value;
        }
        // Update nilai minimum
        if (value < min_val) {
            min_val = value;
        }
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

    // Menghitung rentang nilai (maksimum - minimum)
    int range = max_val - min_val;

    // Menampilkan jumlah seluruh nilai
    printf("%lld\n", sum);

    // Menampilkan nilai rata-rata dengan 2 digit presisi di belakang koma
    printf("%.2f\n", average);

    // Menampilkan banyaknya nilai yang di atas atau sama dengan rata-rata
    printf("%d\n", count_above_average);

    // Menampilkan rentang nilai (maksimum - minimum)
    printf("%d\n", range);

    return 0; // Menandakan program berakhir dengan sukses
}