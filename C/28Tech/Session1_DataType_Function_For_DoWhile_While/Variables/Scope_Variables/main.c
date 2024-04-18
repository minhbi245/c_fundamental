#include <stdio.h>

int main() {

    int n = 2;
    if (n == 2) {
        // Biến được khai báo bên trong một scope được bao đóng bởi {} trong if
        int m = 3;
        printf("m: %d \n", m); // m có thể in ra vì trình biên dịch hiểu m được khai báo trong scope {} if statement
        printf("n in scope if statement: %d\n", n);
    }

    // printf("m: %d", m); // m không được thấy bởi scope bên ngoài, nên trình biên dịch sẽ báo lỗi
    printf("n in out the scope if statement: %d\n", n);
    return 0;
}