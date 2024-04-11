#include <iostream>
using namespace std;

/*
 *
 * We're using numeric_limits to get the min and max of data size and limits all of them
 */

int main() {

    cout << "Max number integer: " << numeric_limits<float>::max() << endl;
    cout << "Min integer: " << numeric_limits<float>::min() << endl;
    float number = numeric_limits<float>::min();
    number--;
    cout << number << endl;
    return 0;
}
