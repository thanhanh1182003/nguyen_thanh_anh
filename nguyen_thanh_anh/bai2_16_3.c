#include <stdio.h>

/* Hàm đếm ký tự space trong chuỗi */
int kytu_space(char str[]) {
    int dem = 0;
    for (int i = 0; str[i] != '\0'; i++) {  // Kiểm tra điều kiện đến khi gặp ký tự kết thúc chuỗi '\0'
        if (str[i] == ' ') {  // Kiểm tra ký tự space
            dem++;
        }
    }
    return dem;
}

int main() {  // Đổi `void main()` thành `int main()` chuẩn hơn
    char str[] = "Nguyen Thanh anh";
    int ketqua = kytu_space(str);  // Bỏ `[]` khi gọi hàm, chỉ cần truyền tên mảng
    printf("Số ký tự space trong chuỗi là: %d\n", ketqua);
    return 0;  // Trả về 0 để báo hiệu chương trình chạy thành công
}
