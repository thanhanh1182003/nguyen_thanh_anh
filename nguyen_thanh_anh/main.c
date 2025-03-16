#include <stdio.h>
void main()
{
    char str[] = "thAnhAnh";
    int i = 0;   // Biến chỉ số để duyệt chuỗi

    while (str[i] > 65 && str[i] < 90) // 60 dến 90 là khu vực giá trị chữ in hoa
    {
        i++;
    }

    printf("So ky tu chu in hoa : %d\n", i);
}
