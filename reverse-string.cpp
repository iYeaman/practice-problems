#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    getline(cin, str);
    int l = str.length();
    int left = 0;
    int right = l - 1;
    while (left < right) {
        swap(str[left], str[right]);
        left++;
        right--;
    }
    for (auto ch : str) {
        cout << ch;
    }
    return 0;
}