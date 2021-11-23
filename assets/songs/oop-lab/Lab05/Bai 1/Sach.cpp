#include "Sach.h"

void Sach::Nhap()
{
	cout << "Nhap ten sach: ";
	cin.ignore();
	cin.getline(TenSach, 20);

	cout << "Nhap gia tien: ";
	cin >> GiaTien;
}

void Sach::Xuat()
{
	cout << "\nTen sach: " << TenSach;
	cout << "\nGia tien: " << GiaTien;
}
