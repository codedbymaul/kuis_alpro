#include <iostream>
using namespace std;

int main() {
    int nilai;

    // Menampilkan petunjuk sebelum memasukkan nilai N
    cout << "=== FIZZBUZZ ===" << endl;
    cout << "masukkan nilai N: ";
    cin >> nilai;

    cout << endl; // Baris baru agar hasil keluaran rapi

    // Perulangan dari 1 sampai N
    for (int i = 1; i <= nilai; i++) {
        // Cek kelipatan 3 dan 5 (kelipatan 15) terlebih dahulu
        if (i % 3 == 0 && i % 5 == 0) {
            cout << "FizzBuzz" << endl;
        } else if (i % 3 == 0) {
            cout << "Fizz" << endl;
        } else if (i % 5 == 0) {
            cout << "Buzz" << endl;
        } else {
            cout << i << endl;
        }
    }

    return 0;
}