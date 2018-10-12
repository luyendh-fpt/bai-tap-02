#include <stdio.h>

float tinhLuongThang13(int soNamKinhNghiem, int soNamCongHien) {
    int mucLuongCoBan, tiLeThuong;
    // Tính mức lương cơ bản theo số năm kinh nghiệm
    if (soNamKinhNghiem < 2) {
        mucLuongCoBan = 10;
    } else if (soNamKinhNghiem >= 2 && soNamKinhNghiem <= 5) {
        mucLuongCoBan = 20;
    } else {
    // Trên 5 năm.
        mucLuongCoBan = 30;
    }
    // Tính phần trăm lương thưởng theo số năm cống hiến.
    if (soNamCongHien < 1) {
        tiLeThuong = 30; // %
    } else if (soNamCongHien >= 1 && soNamCongHien < 2) {
        tiLeThuong = 50; // %
    } else if (soNamCongHien >= 2 && soNamCongHien < 5) {
        tiLeThuong = 100; // %
    } else {
        tiLeThuong = 200; // %
    }
    return (float) mucLuongCoBan * tiLeThuong / 100;
}

int main() {
    int soNamKinhNghiem, soNamCongHien;
    while (1) {
        // Nhập số năm kinh nghiệm và cống hiến.
        printf("Vui lòng nhập số năm kinh nghiệm:\n");
        scanf("%d", &soNamKinhNghiem);
        printf("Vui lòng nhập số năm cống hiến:\n");
        scanf("%d", &soNamCongHien);
        getchar();
        //fflush(stdin);
        // Gọi hàm, in kết qủa.
        float luongThang13 = tinhLuongThang13(soNamKinhNghiem, soNamCongHien);
        printf("Lương tháng thứ 13 của bạn là %.2f\n", luongThang13);
        // Hỏi người dùng có tiếp tục ko ? (y/n)
        printf("Bạn có muốn tiếp tục không (y/n)?\n");
        char choice;
        scanf("%c", &choice);
        if (choice == 'n' || choice == 'N') {
            break;
        }
        getchar();
    }
    return 0;
}