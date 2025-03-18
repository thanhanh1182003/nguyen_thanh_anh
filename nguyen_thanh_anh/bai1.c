#include <stdio.h>

/*xay dung  ham dem so ky tu trong chuoi */
static int demkytu(char chuoi[])
{
	int dem=0;
	while (int i,chuoi[i] != '\0') /*đếm đến khi bằng kí tự 0*/
	{
		 dem++;
	}
	return dem;
}
void main()
{
	char chuoi[] = "nguyen thanh anh";
	int sokytu = demkytu(chuoi);
	printf("so ky tu chuoi la: %d", sokytu);
}