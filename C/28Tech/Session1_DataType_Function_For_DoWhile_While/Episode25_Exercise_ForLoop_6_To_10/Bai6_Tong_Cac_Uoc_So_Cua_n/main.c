#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
    IPO
    Input: n
    Process: Tính tổng các ước số của n
    Output: Tổng các ước số của n
*/

// Cách 1: Duyệt từ 1 đến n time sẽ lâu hơn
// int main() {
//     int n; // input n
//     int sum = 0; // output sum
//     printf("Nhap n: ");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++) {
//         if (n % i == 0) {   // i nên bắt đầu từ số 1, vì 0 không thể chia hết cho bất kỳ số nào
//             sum += i;
//         }
//     }

//     printf("Tong cac uoc so cua %d la: %d\n", n, sum);
//     return 0;
// }

// Tuy nhiên vẫn còn 1 cách nhanh hơn giảm thiểu vòng lặp không cần duyệt hết từ 1 đến n
// Đó là chỉ cần duyệt từ 1 đến căn bậc 2 của n

// Cách 2: Duyệt từ 1 đến căn bậc 2 của n
int main() {
    long long n;
    long long sum = 0;
    printf("Nhap n: ");
    scanf("%lld", &n);

    for (int i = 1; i < sqrt(n); i++) {
        if (n % i == 0) {
            sum += i;
            if (i != n / i) {
                sum += n / i;
            }
        }
    }
    printf("Tong cac uoc so cua %lld la: %lld\n", n, sum);
}