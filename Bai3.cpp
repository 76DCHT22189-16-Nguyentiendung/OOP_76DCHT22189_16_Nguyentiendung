#include <iostream>     // Thư viện dùng cho cin, cout
using namespace std;

// ================= KHAI BÁO LỚP MA TRẬN =================
class MaTran {
private:
    int soHang;          // Lưu số hàng của ma trận
    int soCot;           // Lưu số cột của ma trận
    int a[100][100];     // Mảng lưu các phần tử của ma trận

public:

    // ================= HÀM NHẬP MA TRẬN =================
    void nhap() {

        // Nhập số hàng
        cout << "Nhap so hang: ";
        cin >> soHang;

        // Nhập số cột
        cout << "Nhap so cot: ";
        cin >> soCot;

        // Nhập các phần tử của ma trận
        cout << "Nhap cac phan tu:\n";

        // Duyệt từng hàng
        for (int i = 0; i < soHang; i++) {

            // Duyệt từng cột
            for (int j = 0; j < soCot; j++) {

                // Nhập phần tử tại hàng i, cột j
                cin >> a[i][j];
            }
        }
    }


    // ================= HÀM XUẤT MA TRẬN =================
    void xuat() {

        // Duyệt từng hàng
        for (int i = 0; i < soHang; i++) {

            // Duyệt từng cột
            for (int j = 0; j < soCot; j++) {

                // In từng phần tử
                cout << a[i][j] << " ";
            }

            // In xong một hàng thì xuống dòng
            cout << endl;
        }
    }


    // ================= HÀM CỘNG HAI MA TRẬN =================
    MaTran cong(MaTran B) {

        // Tạo một ma trận C để lưu kết quả
        MaTran C;

        // Ma trận C có số hàng giống ma trận hiện tại
        C.soHang = soHang;

        // Ma trận C có số cột giống ma trận hiện tại
        C.soCot = soCot;

        // Duyệt từng hàng
        for (int i = 0; i < soHang; i++) {

            // Duyệt từng cột
            for (int j = 0; j < soCot; j++) {

                // Cộng phần tử tương ứng của A và B
                C.a[i][j] = a[i][j] + B.a[i][j];
            }
        }

        // Trả về ma trận kết quả C
        return C;
    }
};


// ================= HÀM MAIN =================
int main() {

    // Tạo 3 đối tượng ma trận A, B và C
    MaTran A, B, C;

    // Nhập ma trận A
    cout << "===== NHAP MA TRAN A =====\n";
    A.nhap();

    // Nhập ma trận B
    cout << "\n===== NHAP MA TRAN B =====\n";
    B.nhap();

    // Cộng hai ma trận A và B
    // Kết quả được lưu vào ma trận C
    C = A.cong(B);

    // In ma trận A
    cout << "\n===== MA TRAN A =====\n";
    A.xuat();

    // In ma trận B
    cout << "\n===== MA TRAN B =====\n";
    B.xuat();

    // In ma trận tổng C
    cout << "\n===== TONG HAI MA TRAN =====\n";
    C.xuat();

    // Kết thúc chương trình
    return 0;
}
