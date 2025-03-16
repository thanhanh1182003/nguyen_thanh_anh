#include <stdio.h>
void main()
{
    char str[] = "thanhanh";
    int soluong = 0;
    int i = 0;   // Biến chỉ số để duyệt chuỗi

    while (str[i] != 0) // 0 là ký tự kết thúc chuỗi
    {
        i++;
    }

    printf("So ky tu trong chuoi la: %d\n", i);
}
