#include <stdio.h>
#include <stdlib.h>

// Tinh tong cua day so 1...n (n > 1)
// Tinh tong tu 1 -> 100
// IPO

// Input: dua n, vi khong co n tinh the co ho nao duoc, n la bien kieu int

// Process:

// Output:

int main()
{
    int n;
    int acc = 0; // accumulation - tich luy, gom gop, cong don

    printf("This program will show the sum of n first integer (1...n)\n");
    printf("Please input n > 1: ");
    scanf("%d", &n);
    // Co n roi thi di tinh hoy.
    for (int i = 1; i <= n; i++)
    {
        acc += i; // acc = acc + i;
    }

    printf("The sum is %d\n", acc);

    return 0;
}