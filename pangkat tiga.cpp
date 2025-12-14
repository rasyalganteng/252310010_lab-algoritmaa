#include <iostream>
using namespace std;

void pangkatTiga(int &x) {
    x = x * x * x;   
}

int main() {
    int nilai;

    cout << "Masukkan nilai: ";
    cin >> nilai;
    pangkatTiga(nilai);
    cout << "Hasil pangkat tiga: " << nilai << endl;

    return 0;
}
