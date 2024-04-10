#include <iostream>

/*
 * In C/C++ Programming language, we have fundamentals type like
 * And in C/C++ or C#, Java, Swift is a statically-typed, ~ kiểu dữ liê tĩnh
 * In contrast we have Dynamically-typed ~ kiểu dữ liệu động, in Python, Ruby, Javascript
 *
 *                                  Fundamentals type
 * short: it contains integer number but just with 2 bytes and it's just only -32,768 to 32,767
 * int: integer and have 4byte on memory | -2B to 2B
 * long: similar integer represent number and have 4bytes on memory
 * long long: have bigger size than long and integer, it has 8bytes on memory
 * float: represent for decimal numbers, it will contain 4bytes on memory
 * double: same the float, but bigger than float, contain 8bytes on memory
 * long double: same the float and double, but range biggest, about -3.4E932 to 1.7E4832
 * bool: contain 1 byte, represent for true/false
 * char: contain 1 byte, represent for characters
 */

using namespace std;

int main() {
    double price = 99.99;
    float interestRate = 3.67F; // We have to add F at the end, if not the compiler will understand that double type
    long fileSize = 9000L; // with long type we have to add L at the end like using float, cause if not compiler will infer that int type
    char letter = 'c';
    bool isValid = true;

    auto isValid2 = true;   // auto that is the way we use for compiler inferring the type will be. isValid2 will infer to bool type
    auto longNumber = 5322000L; // using auto will make compiler infer the type of longNumber is long

    int number {};  // this is a way we can initialize the number will assign default value is zero;
    int number2;    // But with tis initializer will not have default value, it will contain garbage value on the memory
    auto decimalNumber = 3.72;
    cout << number << endl;
    cout << number2 << endl;
    return 0;
}
