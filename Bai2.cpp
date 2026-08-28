#include <iostream>
using namespace std;

class MaTran {
private:
    int soHang;
    int soCot;
    int a[100][100];

public:
    void nhap() {
        cout << "Nhap so hang: ";
        cin >> soHang;

        cout << "Nhap so cot: ";
        cin >> soCot;

        cout << "Nhap cac phan tu:\n";

        for (int i = 0; i < soHang; i++) {
            for (int j = 0; j < soCot; j++) {
                cin >> a[i][j];
            }
        }
    }

    void xuat() {
        for (int i = 0; i < soHang; i++) {
            for (int j = 0; j < soCot; j++) {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    MaTran A;

    A.nhap();

    cout << "Ma tran vua nhap la:\n";
    A.xuat();

    return 0;
}
