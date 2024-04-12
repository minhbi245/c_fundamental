#include <iostream>

using namespace std;

int getCenturies(int year) {
    return (year - 1) / 100 + 1;
 }

int main() {
    int year;
    cout << "Enter the year you want to know the century: ";
    cin >> year;

    cout << "The century base on " << year
         << " is " << getCenturies(year) << endl;

    return 0;
}