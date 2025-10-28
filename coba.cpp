#include <iostream>
using namespace std;

int main() {
    int angka[6];
    int baikk, baik, cukup, kurang;

    cout << "Masukkan 5 nilai: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Nilai ke-" << i + 1 << ": ";
        cin >> angka[i];
    }

    baikk = angka[0];
    baik = angka[0];
    cukup = angka[0];
    kurang = angka[0];

    for (int i = 1; i < 5; i++) {
        if (angka[i] > baikk)
            baikk = angka[i];
        if (angka[i] < baik)
            baik = angka[i];
            if (angka[i] < cukup)
            cukup = angka[i];
            if (angka[i] < kurang)
            kurang = angka[i];
    }

    cout << "\nBaik sekali = " << baikk << endl;
    cout << "Baik = " << baik << endl;
    cout << "Cukup = " << cukup << endl;
    cout << "Kurang = " << kurang << endl;

    return 0;
}
