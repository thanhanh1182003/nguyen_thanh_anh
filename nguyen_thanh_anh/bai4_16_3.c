#include <stdio.h>
/*tao ham, dem so tu trong chuoi*/
int dem_so_tu(char str[])
{
	int dem = 0;
	int in_word = 0;// Bi?n ?? ki?m tra có ?ang trong m?t t? hay không
	for (int i=0; str[i] != '\0'; i++)
	{ 
		if (str[i] != ' ')
		{
			if (!in_word)// N?u b?t ??u m?t t? m?i
			{
				dem++;
				in_word = 1;
			}
		}
		else
		{
			in_word = 0;
		}
	}
	return dem;
}
int main()
{
	char str[] = "nguyen thanh anh";
	int so_tu = dem_so_tu(str);
	printf("so tu trong chuoi la: %d", so_tu);
}