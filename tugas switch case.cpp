#include <iostream>
using namespace std;

int main() {
    string nama;
    float n1, n2, n3, rata;
    int kategori;

    cout << "PROGRAM HITUNG NILAI RATA-RATA\n";
    cout << "Nama Siswa: ";
    getline(cin, nama);
    cout << "Nilai Pertandingan I : ";
    cin >> n1;
    cout << "Nilai Pertandingan II: ";
    cin >> n2;
    cout << "Nilai Pertandingan III: ";
    cin >> n3;

    // Hitung rata-rata
    rata = (n1 + n2 + n3) / 3;

    if (rata >= 85)
        kategori = 1;
    else if (rata >= 70)
        kategori = 2;
    else
        kategori = 3;

    cout << "\nSiswa yang bernama " << nama << endl;
    cout << "Memperoleh nilai rata-rata " << rata << " dari hasil perlombaan yang diikutinya." << endl;

    switch (kategori) {
        case 1:
            cout << "Mendapat hadiah: Komputer Core i5" << endl;
            break;
        case 2:
            cout << "Mendapat hadiah: Uang sebesar Rp. 2.500.000" << endl;
            break;
        case 3:
            cout << "Mendapat hadiah: Hadiah Hiburan" << endl;
            break;
        default:
            cout << "Kategori tidak diketahui." << endl;
    }

    return 0;
}
