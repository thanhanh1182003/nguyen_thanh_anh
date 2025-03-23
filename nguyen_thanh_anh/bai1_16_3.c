#include <stdio.h>

/* Hàm đếm số ký tự trong chuỗi */
int demkytu(char chuoi[]) {
    int dem = 0;
    while (chuoi[dem] != '\0') {  // Kiểm tra điều kiện đến khi gặp ký tự kết thúc chuỗi '\0'
        dem++;
    }
    return dem;
}

int main() {  // Đổi `void main()` thành `int main()` để chuẩn hơn
    char chuoi[] = "nguyen thanh anh";
    int sokytu = demkytu(chuoi);
    printf("Số ký tự của chuỗi là: %d\n", sokytu);
    return 0;  // Trả về 0 để báo hiệu chương trình chạy thành công
}
