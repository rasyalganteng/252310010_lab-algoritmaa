#include <iostream>
using namespace std;

int main() {
    string nama;
    float nilai1, nilai2, nilai3, rata;

    cout << "PROGRAM HITUNG NILAI RATA-RATA\n";
    cout << "Nama Siswa: ";
    getline(cin, nama);
    cout << "Nilai Pertandingan I : ";
    cin >> nilai1;
    cout << "Nilai Pertandingan II: ";
    cin >> nilai2;
    cout << "Nilai Pertandingan III: ";
    cin >> nilai3;

    rata = (nilai1 + nilai2 + nilai3) / 3;

    cout << "\nSiswa yang bernama " << nama << endl;
    cout << "Memperoleh nilai rata-rata " << rata << " dari hasil perlombaan yang diikutinya.\n";

    if (rata >= 85) {
        cout << "Mendapat hadiah: Komputer Core i5.\n";
    } else if (rata >= 70) {
        cout << "Mendapat hadiah: Uang sebesar Rp. 2.500.000.\n";
    } else {
        cout << "Mendapat hadiah: Hiburan.\n";
    }

    return 0;
}
