#include <iostream>
#include <stdio.h>
using namespace std;

struct HocSinh
{
    char HoTen[20] ;
    double DiemToan;
    double DiemVan;
};

void NhapHocSinh(HocSinh &n)
{
    fflush(stdin);

    cout << "Ho ten: ";
    cin.getline(n.HoTen, 20);
    do
    {
        cout << "Nhap diem Toan: ";
        cin >> n.DiemToan;

        cout << "Nhap diem Van: ";
        cin >> n.DiemVan;
    } while (n.DiemToan < 0.0 || n.DiemVan < 0.0);
}

double TinhDTB(HocSinh &n)
{
    return (n.DiemToan + n.DiemVan) / 2;
}

int main()
{
    HocSinh n;
    NhapHocSinh(n);
    double dtb = TinhDTB(n);
    cout << "Diem trung binh: " << dtb;
}
