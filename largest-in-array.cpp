#include<iostream>
using namespace std;

int main() {
    int nums[] = {45, 999, -1, 0, 456};
    int size = sizeof(nums) / sizeof(int);
    int largest = INT_MIN;
    for (int i = 0; i < size; i++) {
        if (nums[i] > largest) {
            largest = nums[i];
        }
    }
    cout << "Largest number: " << largest;
    return 0;
}