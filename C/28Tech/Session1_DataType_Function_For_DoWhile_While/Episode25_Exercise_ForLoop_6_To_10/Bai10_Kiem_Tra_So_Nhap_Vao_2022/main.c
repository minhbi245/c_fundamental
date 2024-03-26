#include <stdio.h>
#include <stdlib.h>

/*
    IPO
    Input: nhập vào số nguyên dương n
    Process:
        - Duyệt từ 1 -> n
        - Nhập từ bàn phím vào số tương ứng với số lần n
        - Kiểm tra giá trị nhập vào có là 2022 không, nếu có return YES, else return NO
        - Dùng biến checked (flag) để kiểm tra trong quá trình nhập có không

    Output: Xuất ra màn hình console kết quả kiểm tra số nhập vào có phải là 2022 không
*/

int main()
{
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    int checked = 0;
    for (int i = 1; i <= n; i++)
    {
        int num;
        printf("Nhap so thu %d: ", i);
        scanf("%d", &num);
        if (num == 2022)
        {
            checked = 1;
        }
    }
    
    if (checked == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}