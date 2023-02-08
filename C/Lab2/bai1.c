#include <stdio.h>
/*  BÀI 1:
    Nhập một số nguyên (int)
    Kiểm tra xem số đó là số chẵn hay lẻ.
    In kết quả.
*/
int main()
{
    int a;
    printf("Ban nhap vao so: ");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("%d la so chan!", a);
        return 0;
    }
    printf("%d day la so le!", a);
    return 0;
}