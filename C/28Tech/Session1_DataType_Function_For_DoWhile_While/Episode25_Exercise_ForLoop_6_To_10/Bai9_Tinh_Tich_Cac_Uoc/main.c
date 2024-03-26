#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
    - Tinh tích các ước số của n
    - Ta cần biết ước số chính là chính n % i == 0 (i chính là giá trị mà n chia hết không dư)
    - Với i là giá trị trong dãy từ 1 -> n
    IPO
    Input: nhập vào số nguyên dương n
    Process:
        - Duyệt từ 1 -> n
        - Nếu n % i == 0 thì đó là ước số của n
        - Tính tích các ước số của n
    Output: xuất ra màn hình console kết quả tích các ước số của n
*/

int main() {
    long long n; // constraint n <= 10^10
    long long accu = 1;

    printf("Nhap n: ");
    scanf("%lld", &n);

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
            accu *= i;
        }
    }

    printf("Tich cac uoc so cua %lld la: %lld\n", n, accu); // %lld là để in ra số nguyên dài (long long

    return 0;
}