#include <stdio.h>
/*xay dung ham,chuyen chua thuong thanh chuwx in hoa
*/
void thuong_thanh_in_hoa(char str[])
{
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;//chuyen chua thuong thanh in hoa
		}
	}
}
int main()
{
	char str[] = "xin chao the gioi";
	thuong_thanh_in_hoa(str);
	printf("%s", str);
}