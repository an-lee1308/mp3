#include "SachGiaoKhoa.h"

void SachGiaoKhoa::Nhap()
{
	cout << "\nThong tin Sach giao khoa:\n";
	Sach::Nhap();

	cout << "Nhap so tap: ";
	cin >> SoTap;
}

void SachGiaoKhoa::Xuat()
{
	Sach::Xuat();
	cout << "\nSo tap: " << SoTap;
	cout << endl;
}
