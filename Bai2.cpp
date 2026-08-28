#include <iostream>     // Thư viện dùng cho cin và cout
using namespace std;    // Giúp viết cin, cout thay vì std::cin, std::cout

// Khai báo lớp MaTran
class MaTran {
private:
    int soHang;         // Biến lưu số hàng của ma trận
    int soCot;          // Biến lưu số cột của ma trận
    int a[100][100];    // Mảng 2 chiều lưu các phần tử của ma trận

public:

    // ================= HÀM NHẬP MA TRẬN =================
    void nhap() {

        // Nhập số hàng
        cout << "Nhap so hang: ";
        cin >> soHang;

        // Nhập số cột
        cout << "Nhap so cot: ";
        cin >> soCot;

        // Thông báo nhập các phần tử
        cout << "Nhap cac phan tu:\n";

        // Vòng lặp duyệt từng hàng
        for (int i = 0; i < soHang; i++) {

            // Vòng lặp duyệt từng cột
            for (int j = 0; j < soCot; j++) {

                // Nhập phần tử tại hàng i, cột j
                cin >> a[i][j];
            }
        }
    }


    // ================= HÀM XUẤT MA TRẬN =================
    void xuat() {

        // Vòng lặp duyệt từng hàng
        for (int i = 0; i < soHang; i++) {

            // Vòng lặp duyệt từng cột
            for (int j = 0; j < soCot; j++) {

                // In từng phần tử của ma trận
                cout << a[i][j] << " ";
            }

            // Xuống dòng sau khi in xong một hàng
            cout << endl;
        }
    }
};


// ================= HÀM MAIN =================
int main() {

    // Tạo một đối tượng ma trận tên là A
    MaTran A;

    // Gọi hàm nhập dữ liệu cho ma trận A
    A.nhap();

    // Thông báo
    cout << "Ma tran vua nhap la:\n";

    // Gọi hàm xuất ma trận A ra màn hình
    A.xuat();

    // Kết thúc chương trình
    return 0;
}
