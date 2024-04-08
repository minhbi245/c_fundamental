#include <iostream> // import library file using function print out the screen

int main() {
    int a = 1;
    int b = 2;
    const double pi = 3.14; // This is a syntax to declare a variable is constant
    int c = a + b;
    int temp = a;
    std::cout << "value of variable a before swap: " << a << std::endl;
    std::cout << "value of variable b before swap: " << b << std::endl;

//    a = c - a;
//    b = c - b;
//    std::cout << "value of variable a after swap: " << a << std::endl;
//    std::cout << "value of variable b after swap: " << b << std::endl;

    a = b;
    b = temp;
    std::cout << "value of variable a after swap using temporary: " << a << std::endl;
    std::cout << "value of variable b after swap using temporary: " << b << std::endl;
//    std::cout << "Helloooo world!!!!"; // using std:cout the function will print the value to the console

//    pi = 0; // could not change the value variable is declared constant

//  Order operator
//    double x = 10;
//    double y = 5;
//    double z = (x + 10) / (3 * y);
//    std::cout << z << std::endl;

    // Operator increment and decrement
    int x = 10;
    int y = x++;    // Firstly, y will assign value is 10, then x increment to 1 value is 11 then x will have value 11
    std::cout << x << std::endl;
    std::cout << y << std::endl;    // y is 10

    int num1 = 10;
    int num2 = ++num1; // In this case, num1 will increment first -> 11 then assign value to num2, then num2 has value 11 and num1 has 11 also

    std::cout << "num1: " << num1 << std::endl;
    std::cout << "num2: " << num2 << std::endl;

    /*
     * std::cout ~ Standard Output Stream -> Stream: luồng caác kí tự được in ra console
     * << is Stream Insertion Stream ~ Toán tử chèn luồng
     *
     * */
    return 0;   // this will inform the compiler that program run exactly and don't have any errors
}
