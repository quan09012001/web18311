#include <stdio.h>
/*
Nhập a từ bàn phím tiến hành tính:
Diện tích hình tròn (công thức: S = a * a * 3.14)
Diện tích hình vuôn (công thức: S = a * a)
Diện tích hình tam giác đểu biết "tam giác đều = 1/4 hình vuông" (công thức: S = (a * a) * (1 / 4)) 
*/
int main()
{
    // 3.14 và 4 là giá trị không đổi nên ta dùng hàm  const
    const float PI = 3.14;
    const int BON = 4;
    // khai báo a kiểu số nguyên
    int a;
    // printf để in ra chuỗi ký tự và scanf để nhập từ bàn phím
    printf("nhap a: ");
    scanf("%d", &a);
    // PI là số thực nên ta khai báo St kiểu float
    float St = a * a * PI;
    // nhập a vào là số nguyên nên kết quả in ra diện tích hình vuông luôn là số nguyên ta khai báo Sv kiểu số nguyên
    int Sv = a * a;
    // S tam giác cân = 1/4 diện tích hình vuông, kết quả có thể là số thực (vd: khi a = 1) nên ta khai báo Stg kiểu số thực và tiến hành ép kiểu cho Sv
    float Stg = (float)Sv / BON;
    // chúng ta tiến hành in ra màn hình kết quả, với float chúng ta dùng %.2f để kết quả số thực in ra đằng sau dấu chấm có 2 số. Với hình vuông thì khai báo số nguyên kết quả đương nhiên là số nguyên nên ta dùng %d
    printf("Dien tich hinh tron la: %.2f \n", St);
    printf("Dien tich hinh Vuong la: %d \n", Sv);
    printf("Dien tich hinh tam giac can la: %.2f", Stg);
    // return để kết thúc chương trình
    return 0;
}
