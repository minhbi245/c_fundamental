#include <stdio.h>
#include <stdlib.h>

/*
    IPO:
        I: n (int)
        P: Tính tổng số nghịch đảo
        O: sum (int)
*/

int main()
{

    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    double sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += 1.0 / i;
    }
    printf("Tong so nghich dao: %.3lf\n", sum);

    return 0;
}