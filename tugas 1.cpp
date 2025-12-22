#include <iostream>
using namespace std;

struct Mahasiswa {
    string nama;
    float tugas;
    float praktikum;
    float uts;
    float uas;
};

int main() {
    Mahasiswa m;
    float rata;
    char grade;

    cout << "Masukkan Nama Mahasiswa : ";
    getline(cin, m.nama);

    cout << "Nilai Tugas       : ";
    cin >> m.tugas;
    cout << "Nilai Praktikum   : ";
    cin >> m.praktikum;
    cout << "Nilai UTS         : ";
    cin >> m.uts;
    cout << "Nilai UAS         : ";
    cin >> m.uas;

    rata = (m.tugas + m.praktikum + m.uts + m.uas) / 4;

    if (rata >= 90)
        grade = 'A';
    else if (rata >= 80)
        grade = 'B';
    else if (rata >= 70)
        grade = 'C';
    else if (rata >= 60)
        grade = 'D';
    else
        grade = 'E';

    cout << "\nHASIL NILAI " << endl;
    cout << "Nama         : " << m.nama << endl;
    cout << "Rata-rata    : " << rata << endl;
    cout << "Grade Nilai  : " << grade << endl;

    return 0;
}
