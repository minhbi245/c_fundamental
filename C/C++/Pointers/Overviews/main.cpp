#include <iostream>

using namespace std;

/*
    Sumammry:
        - Tổng kết lại, biến con trỏ được tạo ra được dùng chỉ để chưa giá trị là địa chỉ vùng nhớ mà biến được cấp phát ở memory
        - Khi khai báo một biến pointer cú pháp sau
        <data type> *<tên_biên>;
        
        - Để cấp phát pointer trên vùng nhớ memory
        <data_type> *<tên_biên> = new <data_type>;
        lúc này nếu ta truyen cập tên biến pointer thì sẽ nhận được địa chỉ mà biến được cấp trên vùng nhớ
        còn nếu lấy giá trị mà pointer trỏ đến trên vùng nhớ khi chưa gán bát kì giá trị nào thì nó có giá trị là 0
*/

int main() {

    int celcius = 36;

    // Display the address celcius allocated on the memory
    cout << "Print the address variable allocate on the memory: " << &celcius << endl;

    // Declare the pointer variable;
    int *pointerA;  
    pointerA = &celcius; // pointer just assigned by the address allocate on the memory
    
    cout << "The address pointer a is pointed on the memory: " << pointerA << endl;
    cout << "A value is assigned to variable celcius before change: " << celcius << endl;

    *pointerA = 40;
    cout << "The value has been changed by using pointer: " << *pointerA << endl;
    cout << "The value on the variable celcius after changed by pointer: " << celcius << endl;

    int *pointerB = new int; // The pointer has been declaring and allocating on memmory
    cout << "The value of address pointerB has: " << pointerB << endl;
    cout << "The value on the memory allocated using pointerB: " << *pointerB << endl;
    return 0;
}