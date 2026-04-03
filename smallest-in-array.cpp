#include<iostream>
using namespace std;

int main() {
    int array[] = {133, 1, -34, 6, 0};
    int size = sizeof(array) / sizeof(int);
    int smallest = INT_MAX;
    for (int i = 0; i < size; i++) {
        if (array[i] < smallest) {
            smallest = array[i];
        }
    }
    cout << "Smallest number: " << smallest;
    return 0;
}