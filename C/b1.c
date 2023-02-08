#include<stdio.h>

/*
Bài 1: Nhập 2 số kiểu nguyên in ra tổng hiệu tích thương
*/

int main(){
    int a, b;
    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);
    printf("KQ phep cong: %d \n", a+b);
    printf("KQ phep tru: %d \n", a-b);
    printf("KQ phep nhan: %d \n", a*b);
    printf("KQ phep chia: %.3f", (float)a/b);
    return 0;
}