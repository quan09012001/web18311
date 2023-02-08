#include <stdio.h>

/*
Bài 1: Nhập 2 số kiểu nguyên in ra tổng hiệu tích thương
*/

int main()
{
    // khai báo a, b kiểu số nguyên
    int a, b;
    /*
    nhập a, b từ bàn phím
    */
    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);
    /*
    in ra kết quả
    */
    printf("KQ phep cong: %d \n", a + b);
    printf("KQ phep tru: %d \n", a - b);
    printf("KQ phep nhan: %d \n", a * b);
    // kết quả phép chia có thể là số thập phân nên ta phải ép kiểu cho a hoặc b kiểu số thực
    printf("KQ phep chia: %.3f", (float)a / b);
    return 0;
}