#include <stdio.h>
// S(tron) = a * a * 3.14
// S(vuong) = a * a
// S(tam giac can) = S(vuong / 4)
int main()
{
    const int v = 4;
    const float n = 3.14;
    int a;
    printf("nhap a: ");
    scanf("%d", &a);
    float St = a * a * n;
    int Sv = a * a;
    float Stg = (float)Sv / v;
    printf("Dien tich hinh tron la: %.2f \n", St);
    printf("Dien tich hinh Vuong la: %d \n", Sv);
    printf("Dien tich hinh tam giac can la: %.2f", Stg);
    return 0;
}
