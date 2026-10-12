#include <iostream>
using namespace std;

int main() {
    int nilai;

    cout << "=== KASIR DISKON BERTINGKAT ===" <<endl;
    cout << "Masukkan Banyak Barang: ";
    cin >> nilai;

    long long subtotal = 0;

    // Membaca N baris yang berisi Harga (H) dan Kuantitas/Jumlah (Q)
    for (int i = 0; i < nilai; i++) {
        long long harga, quantity;
        cout << "Masukkan Harga dan Quantity Barang ke-" << (i + 1) << ": ";
        cin >> harga >> quantity;
        subtotal += (harga * quantity);
    }

    // Menghitung diskon berdasarkan Subtotal
    long long diskon = 0;
    if (subtotal >= 500000) {
        diskon = subtotal * 10 / 100; // 10%
    } else if (subtotal >= 200000) {
        diskon = subtotal * 5 / 100;  // 5%
    }

    long long totalBayar = subtotal - diskon;

    cout << endl;
    cout << "Subtotal: " << subtotal << endl;
    cout << "Diskon: " << diskon << endl;
    cout << "Total Bayar: " << totalBayar << endl;

    return 0;
}