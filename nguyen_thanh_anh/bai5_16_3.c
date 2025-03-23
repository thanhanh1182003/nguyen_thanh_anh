#include <stdio.h>
/*tao ham,in hoa chua cai dau trong chuoi
chuc nang:
           in hoa chua cai dau moi tu
input:
           char str[]
output:
           char
*/
char in_hoa_chu_dau(char str[])
{
    int in_word = 0;//bien kiem tra xem co trong 1 tu ko
    for (int i = 0; str[i] != 0; i++)
    {
        if (str[i] != ' ')// neu ko laf khoang trang
        {
            if (!in_word)// neu bat dau 1 tu
            {
                str[i] = str[i] - 32;// viet hoa chu cai dau
                in_word = 1;
            }
        }
        else in_word = 0;
    }
}
void main()
{
    char str[] = "nguyen thanh anh";
    in_hoa_chu_dau(str);
    printf("%s", str);
}