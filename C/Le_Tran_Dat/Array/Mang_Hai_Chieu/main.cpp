#include <iostream>

using namespace std;

#define ARR_SIZE 10

int main() {

    int arr[500]; // basically declare a arr with size 500 elements
    int anotherArr[ARR_SIZE];   // Similar like above decalre an arr with size has defined on the top level ARR_SIZE has value is 50
    double doubleArr[ARR_SIZE]; // Declare arr contains 50 elemnts have a double data type

    for (int i = 0; i <= (ARR_SIZE - 1); i++) {
        cin >> anotherArr[i];   // Enter a value to each element in arr
    }

    cout << "The elements in the arr: ";
    for (int i = 0; i <= (ARR_SIZE - 1); i++) {
        cout << anotherArr[i] << " ";
    }

    // int array2D[3][4];

    // for (int row = 0; row < 3; row++) {
    //     for (int col = 0; col < 4; col++) {
    //         cin >> array2D[row][col];
    //     }
    // }

    // for (int row = 0; row < 3; row++) {
    //     cout << array2D[row] << endl;
    // }
}