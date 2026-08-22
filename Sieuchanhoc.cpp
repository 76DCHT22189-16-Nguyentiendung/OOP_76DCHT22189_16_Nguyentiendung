#include <iostream>
#include <string>
#include <vector>

using namespace std;

class NhanVien {
private:
    string ten;
    int tuoi;
public:
    void nhap() {
        cout << "Nhap ten: ";
        cin.ignore();
        getline(cin, ten);
        cout << "Nhap tuoi: ";
        cin >> tuoi;
    }

    void xuat() const {
        cout << "Ten: " << ten << " | Tuoi: " << tuoi << endl;
    }
};

int main() {
    // ----------------------------------------------------
    // CACH 1: Mang tinh (Static Array)
    // ----------------------------------------------------
    NhanVien dsnv1[10];
    for (int i = 0; i < 2; i++) { // Demo 2 phan tu
        cout << "\n=== NHAP THONG TIN CHO NHAN VIEN THU " << i + 1 << " ===" << endl;
        dsnv1[i].nhap();
    }
    for (int i = 0; i < 2; i++) {
        cout << "\n=== THONG TIN NHAN VIEN THU " << i + 1 << " ===" << endl;
        dsnv1[i].xuat();
    }

    // ----------------------------------------------------
    // CACH 2: Mang dong (Dynamic Array với con trỏ new/delete)
    // ----------------------------------------------------
    NhanVien *dsnv2 = new NhanVien[10];
    for (int i = 0; i < 2; i++) {
        cout << "\n=== NHAP THONG TIN CHO NHAN VIEN THU " << i + 1 << " ===" << endl;
        dsnv2[i].nhap();
    }
    for (int i = 0; i < 2; i++) {
        cout << "\n=== THONG TIN NHAN VIEN THU " << i + 1 << " ===" << endl;
        dsnv2[i].xuat();
    }
    delete[] dsnv2; // Bat buoc thu hoi bo nho

    // ----------------------------------------------------
    // CACH 3: Vector (std::vector)
    // ----------------------------------------------------
    vector<NhanVien> dsnv3;
    for (int i = 0; i < 2; i++) {
        cout << "\n=== NHAP THONG TIN CHO NHAN VIEN THU " << i + 1 << " ===" << endl;
        NhanVien nv;
        nv.nhap();
        dsnv3.push_back(nv); // Them vao cuoi vector
    }
    for (size_t i = 0; i < dsnv3.size(); i++) {
        cout << "\n=== THONG TIN NHAN VIEN THU " << i + 1 << " ===" << endl;
        dsnv3[i].xuat();
    }

    return 0;
}
