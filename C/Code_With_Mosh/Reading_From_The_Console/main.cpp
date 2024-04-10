#include <iostream>
using namespace std;

/*
 * cin ~ standard input stream ~ tương đương luồng nhập vào
 * operator >> ~ stream extraction operator -> trích xuất luồng dữ liệu
 *
 */

/*
 * Challenge solve the problem
 * Change from fahrenheit to celsius
 *
 * Input: fahrenheit
 * Process: Calculate convert fahrenheit to celsius below
 *          (Fahrenheit - 32) / 1.8
 */

int main() {
//    cout << "Enter a value: ";
//    cout << "Enter the value of x and y: ";
//    double x;
//    double y;
//
//    // shorthand to read the value from console
//    cin >> x >> y; // this statement will get value from console x and y
//    cout << "The total x and y: " << x + y << endl;

    double fahrenheit;
    cout << "Enter the fahrenheit: ";
    cin >> fahrenheit;

    double celsius = (fahrenheit - 32) / 1.8;
    cout << "The celsius convert from fahrenheit is: " << celsius << endl;
    return 0;
}
