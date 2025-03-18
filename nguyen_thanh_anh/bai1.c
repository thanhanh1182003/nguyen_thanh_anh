#include <stdio.h>
/*xay dung  ham dem so ky tu trong chuoi */
static int demkytu(char chuoi[])
{
	int i =0;
	while (chuoi[i] != '\0') /*đếm đến khi bằng kí tự 0*/
	{
		 i++;
	}
	return i ;
}
void main()
{
	char chuoi[] = "nguyen thanh anh";
	int sokytu = demkytu(chuoi);
	printf("so ky tu chuoi la: %d", sokytu);
}