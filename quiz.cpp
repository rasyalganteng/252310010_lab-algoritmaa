#include <iostream>
using namespace std;

int main() {
	int sum = 0;
	 cout << "Deret 10 bilangan ganjil: ";
    for (int i = 1; i <= 19; i += 2) {
        cout << i;
        sum += i;
        if (i < 19) cout << " + ";
    }
    cout << " = " << sum << endl;
}
