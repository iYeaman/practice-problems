#include<iostream>
using namespace std;

//Binary to Deciaml Conversion
int BinToDec(int binNum) {
    int ans = 0;
    int pow = 2;
    while (binNum > 0) {
        int rem = binNum % 10;
        ans = ans + (rem * pow);
        binNum = binNum / 10;
        pow = pow * 2;
    }
    return ans;
}

int main() {
    int binNum;
    cout << "Enter binary number: ";
    cin >> binNum;
    int res = BinToDec(binNum);
    cout << binNum << " = " << res;
    return 0;
}