#include <iostream>

using namespace std;

#define ARRAY_SIZE 50

int main() {

    int arr[ARRAY_SIZE];
    int arr_clone[ARRAY_SIZE];
    char my_name[] = {'K', 'h', 'a', 'n', 'h'};

    // for (int idx = 0; idx <= (ARRAY_SIZE - 1); idx++) {
    //     arr[idx] = idx + 1;
    // }

    // for(int idx = 0; idx <= (ARRAY_SIZE - 1); idx++) {
    //     arr_clone[idx] = arr[idx];
    // }

    // for (int i = 0; i < ARRAY_SIZE; i++) {
    //     cout << arr_clone[i] << " ";
    // }

    for (int i = 0; i <= ARRAY_SIZE; i++) {
        if(my_name[i] == 'n')
            cout << "Found the character n \n";
    }

    return 0;
} 