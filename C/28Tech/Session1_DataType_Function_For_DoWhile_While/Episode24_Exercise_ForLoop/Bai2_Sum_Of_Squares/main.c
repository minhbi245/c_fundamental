#include <stdio.h>
#include <stdlib.h>

/*
    Tính tổng bình phương của các số từ 1 đến n
    IPO:
        Input: n
        Process: Tính tổng bình phương của các số từ 1 đến n
        Output: In ra tổng bình phương của các số từ 1 đến n
*/

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum += i * i;   // Ở đây có thể dùng hàm pow trong math để thay thế i * i
                        // cách viết khác: sum += pow(i, 2);
    }

    printf("Sum of squares of 1 to %d is %d\n", n, sum);

    return 0;
}