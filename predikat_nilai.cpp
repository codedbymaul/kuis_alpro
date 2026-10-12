
#include <iostream>
using namespace std;

int main() {
    int N;

    cout << "=== PREDIKAT NILAI ===" << endl;
    cout << "Masukkan nilai: ";
    cin >> N;

    if (N >= 85) {
        cout << "A" << endl;
    } else if (N >= 70) {
        cout << "B" << endl;
    } else if (N >= 55) {
        cout << "C" << endl;
    } else {
        cout << "D" << endl;
    }

    return 0;
}
