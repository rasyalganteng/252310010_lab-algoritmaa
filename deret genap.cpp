#include <iostream>
using namespace std;

int main() {
    int sum = 0;

    cout << "Deret 10 bilangan genap: ";
    for (int i = 2; i <= 20; i += 2) {
        cout << i;
        sum += i;
        if (i < 20) cout << " + ";
    }
    cout << " = " << sum << endl;

    return 0;
}

