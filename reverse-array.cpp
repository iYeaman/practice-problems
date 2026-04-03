#include<iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void reverseArray(int array[], int size) {
    int start = 0;
    int end = size - 1;
    while (start < end) {
        swap(array[start], array[end]);
        start++;
        end--;
    }
}

void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
}

int main() {
    int size;
    cout << "Enter array size: ";
    cin >> size;
    int array[size];
    for (int i = 0; i < size; i++) {
        cout << "Enter array element " << i + 1 << " : ";
        cin >> array[i];
    }
    cout << "Array elements before reversing: ";
    printArray(array, size);
    cout << endl;
    cout << "Array elements after reversing: ";
    reverseArray(array, size);
    printArray(array, size);
    return 0;
}