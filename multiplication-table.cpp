#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int product;

    for (int i = 1; i <= 10; i++) {
        product = n * i;
        cout << n << " x " << i << " = " << product << endl;
    }

    return 0;
}