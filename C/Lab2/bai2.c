#include <stdio.h>
#include <string.h>

int main()
{
    char name[50];
    float toan, ly, hoa;
    printf("Nhap ten hoc sinh: ");
    scanf("%s", &name);
    printf("Nhap diem toan: ");
    scanf("%f", &toan);
    printf("\nNhap diem ly: ");
    scanf("%f", &ly);
    printf("\nNhap diem hoa: ");
    scanf("%f", &hoa);
    float TB = (toan + ly + hoa) / 3;
    if (TB >= 9)
    {
        printf("diem trung binh cua %s la %.2f xep loai A", name, TB);
    }
    else if (TB >= 7)
    {
        printf("diem trung binh cua %s la %.2f xep loai B", name, TB);
    }
    else if (TB >= 5)
    {
        printf("diem trung binh cua %s la %.2f xep loai C", name, TB);
    }
    else
    {
        printf("diem trung binh cua %s la %.2f xep loai D", name, TB);
    }
    return 0;
}
