#include <stdio.h>
#include <stdlib.h>

/*
    Tính tổng các số tự nhiên từ 1 đến n
    IPO:
        Input: n
        Process: Tính tổng các số tự nhiên từ 1 đến n
        Output: In ra tổng các số tự nhiên từ 1 đến n
*/

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    int sum = 0;

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("Sum of 1 to %d is %d\n", n, sum);

    return 0;
}