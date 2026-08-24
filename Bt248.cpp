#include <iostream>
#include <string>
#include <vector>

using namespace std;

class NhanVien {
private:
    string ten;
    int tuoi;

public:
    NhanVien() {
        ten = "";
        tuoi = 0;
    }

    NhanVien(string t, int tuoi) {
        ten = t;
        this->tuoi = tuoi;
    }

    void nhap() {
        cout << "Nhap ten: ";
        getline(cin, ten);

        cout << "Nhap tuoi: ";
        cin >> tuoi;
        cin.ignore();
    }

    void xuat() const {
        cout << ten << "\t\t" << tuoi << endl;
    }
};

int main() {
    int n;

    cout << "Nhap so luong nhan vien: ";
    cin >> n;
    cin.ignore();

    vector<NhanVien> ds;

    for (int i = 0; i < n; i++) {
        string ten;
        int tuoi;

        cout << "\nNhap thong tin nhan vien thu " << i + 1 << endl;

        cout << "Nhap ten: ";
        getline(cin, ten);

        cout << "Nhap tuoi: ";
        cin >> tuoi;
        cin.ignore();

        NhanVien nv(ten, tuoi);

        ds.push_back(nv);
    }

    cout << "\n========== DANH SACH NHAN VIEN ==========\n";
    cout << "STT\tHo ten\t\tTuoi" << endl;
    cout << "-----------------------------------------" << endl;

    for (int i = 0; i < ds.size(); i++) {
        cout << i + 1 << "\t";
        ds[i].xuat();
    }

    return 0;
}
