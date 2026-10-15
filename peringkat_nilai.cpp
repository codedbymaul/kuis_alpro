#include <iostream>
using namespace std;

int main() {
    int N;

    cout << "=== PERINGKAT NILAI AKHIR ===" << endl;
    cout << "Masukkan jumlah siswa: ";
    cin >> N;

    // Menyiapkan array untuk menyimpan nilai tugas, UTS, UAS, skor akhir, dan peringkat setiap siswa
    int tugas[N], uts[N], uas[N], skor[N], peringkat[N];

    // Memasukkan nilai setiap siswa dan menghitung skor akhirnya
    for (int i = 0; i < N; i++) {
        cout << "Siswa ke-" << i + 1 << endl;

        cout << "Nilai tugas: ";
        cin >> tugas[i];

        cout << "Nilai UTS: ";
        cin >> uts[i];

        cout << "Nilai UAS: ";
        cin >> uas[i];

        // Menghitung skor akhir dengan bobot tugas 30%, UTS 30%, dan UAS 40%
        skor[i] = 3 * tugas[i] + 3 * uts[i] + 4 * uas[i];
    }

    // Menentukan peringkat setiap siswa berdasarkan skor akhirnya
    for (int i = 0; i < N; i++) {

        // Setiap siswa awalnya dianggap berada di peringkat pertama
        peringkat[i] = 1;

        // Membandingkan skor siswa saat ini dengan skor semua siswa lainnya
        for (int j = 0; j < N; j++) {

            // Jika ada siswa lain yang skornya lebih tinggi,
            // peringkat siswa saat ini turun satu tingkat
            if (skor[j] > skor[i]) {
                peringkat[i]++;
            }
        }
    }

    cout << endl << "=== HASIL PERINGKAT ===" << endl;

    // Menampilkan peringkat setiap siswa sesuai urutan input
    for (int i = 0; i < N; i++) {
        cout << peringkat[i] << endl;
    }

    return 0;
}