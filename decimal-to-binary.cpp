#include<iostream>
using namespace std;

//Decimal to Binary Conversion
int DecToBin(int decNum) {
    int ans = 0;
    int pow = 1;
    while (decNum > 0) {
        int rem = decNum % 2;
        decNum = decNum / 2;
        ans = ans + (rem * pow);
        pow = pow * 10;
    }
    return ans;
}

int main () {
    int decNum;
    cout << "Enter decimal number: ";
    cin >> decNum;
    int res = DecToBin(decNum);
    cout << decNum << " = " << res;
    return 0;
}