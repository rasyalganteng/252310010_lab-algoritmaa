#include <iostream>
using namespace std;

int main() {
    int n;              
    int a = 0, b = 1;   
    int i = 1;          

    cout << "Masukkan jumlah suku Fibonacci: ";
    cin >> n;

    cout << "Deret Fibonacci: ";

    while (i <= n) {
        cout << a << " ";     
        int next = a + b;     
        a = b;                
        b = next;
        i++; 
    }

    cout << endl;
    return 0;
}
