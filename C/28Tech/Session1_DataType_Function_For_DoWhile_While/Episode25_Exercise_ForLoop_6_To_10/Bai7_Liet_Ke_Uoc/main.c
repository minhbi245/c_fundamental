#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
    - Liệt kê ước chính là tìm ra các số mà n có thể chia hết không dư từ 1 -> n

    IPO
    Input: với n là số nguyên dương được nhập vào
    Process: Liệt kê các ước số của n từ 1 -> n với n % i == 0
    Output: Các ước số của n, xuất ra màn hình console các giá trị mà n chia hết không dư
*/

int main () {
    long long n;
    int counter = 0;
    printf("Nhap n: ");
    scanf("%lld", &n);

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
            counter++;  // Đếm số lượng ước số của n
        }
    }
    printf("\nSo luong uoc so cua %lld la: %d\n", n, counter);
    return 0;
}