#include <stdio.h>
#include <stdlib.h>

/*
    Tính tổng các số chia hết cho 3 từ 1 đến n
    IPO:
        Input: n
        Process: Tính tổng các số chia hết cho 3 từ 1 đến n
        Output: In ra tổng các số chia hết cho 3 từ 1 đến n
*/

int main() {
    int n;  // biến lưu giá trị n
    printf("Enter n: ");
    scanf("%d", &n);

    long long sum = 0; // biến lưu tổng giá trị các số chia hết cho 3
    for (int i = 0; i <= n; i += 3) {
        sum += i;   // Process: Tính tổng các số chia hết cho 3 từ 1 đến n
    }
    printf("Sum of multiples of 3 from 1 to %d is %lld\n", n, sum);
    return 0;
}