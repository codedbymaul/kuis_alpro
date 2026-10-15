#include <iostream>
using namespace std;

int main() {
    int N;

    cout << "=== SUBBARISAN MAKSIMUM ===" << endl;
    cout << "Masukkan jumlah angka: ";
    cin >> N;

    // Mengecek apakah jumlah angka yang dimasukkan lebih dari 0
    if (N <= 0) {
        cout << "Jumlah angka harus lebih dari 0!" << endl;
        return 0;
    }

    long long A[N];

    cout << "Masukkan " << N << " angka:" << endl;

    // Memasukkan semua angka ke dalam array A
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    // Menggunakan angka pertama sebagai nilai maksimum sementara
    long long maksimum = A[0];

    // Menentukan posisi awal subbarisan yang akan dihitung
    for (int i = 0; i < N; i++) {

        // Mengatur ulang jumlah setiap kali memulai dari posisi baru
        long long jumlah = 0;

        // Menambahkan angka dari posisi awal sampai posisi terakhir
        for (int j = i; j < N; j++) {
            jumlah = jumlah + A[j];

            // Membandingkan jumlah saat ini dengan nilai maksimum
            // Jika lebih besar, nilai maksimum diperbarui
            if (jumlah > maksimum) {
                maksimum = jumlah;
            }
        }
    }

    // Menampilkan jumlah terbesar dari semua subbarisan yang diperiksa
    cout << "Subbarisan Maksimum: "
         << maksimum << endl;

    return 0;
}