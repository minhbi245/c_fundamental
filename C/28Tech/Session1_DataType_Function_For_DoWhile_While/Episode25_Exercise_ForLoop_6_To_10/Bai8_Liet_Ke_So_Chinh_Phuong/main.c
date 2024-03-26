#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
    Muốn liệt kê số chính phương từ 1 -> n
    - Số chính phương là số mà căn bậc 2 của nó là số nguyên
    - Ta sẽ căn bậc 2 của n đầu tiên, sau đó chỉ cần lấy int của căn bậc 2 đó, nếu bằng căn bậc 2 thì đó là số chính phương

    IPO:
    - Input: n là số nguyên đầu vào
    - Process: Liệt kê các số chính phương từ 1 -> n
    - Output: Các số chính phương từ 1 -> n
*/

int main() {

    long long n; // constraint n <= 10^10

    printf("Nhap n: ");
    scanf("%lld", &n);

    for (int i = 1; i <= sqrt(n); i++) {
        if (i * i <= n) {
            printf("%d ", i * i);   // i * i là cách ta có được số chính phương
        }
    }

    return 0;
}