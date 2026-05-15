#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int largest = INT_MIN;
    int secLargest = INT_MIN;
    bool found = false;

    for (auto curEle : nums) {
        if (curEle > largest) {
            secLargest = largest;
            largest = curEle;
        } else if (curEle < largest && curEle > secLargest) {
            secLargest = curEle;
            found = true;
        }
    }

    if (!found) {
        cout << -1;
    } else {
        cout << secLargest;
    }
    
    return 0;
}