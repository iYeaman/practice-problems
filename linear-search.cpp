#include<iostream>
using namespace std;

int linearSearch(int array[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (array[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int size;
    cout << "Enter array size: ";
    cin >> size;
    int array[size];
    for (int i = 0; i < size; i++) {
        cout << "Enter array element " << i + 1 << ": ";
        cin >> array[i];
    }
    int target;
    cout << "Enter an element to search: ";
    cin >> target;
    cout << "The target element is at index: " << linearSearch(array, size, target);
    return 0;
}