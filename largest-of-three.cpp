#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    vector<int> nums(3);
    for (int i = 0; i < 3; i++) {
        cin >> nums[i];
    }
    int largest = INT_MIN;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] > largest) {
            largest = nums[i];
        }
    }
    cout << largest;
    return 0;
}