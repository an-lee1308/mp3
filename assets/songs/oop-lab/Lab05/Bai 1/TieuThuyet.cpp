#include "TieuThuyet.h"

void TieuThuyet::Nhap()
{
	cout << "\nThong tin Tieu thuyet:\n";
	Sach::Nhap();

	cout << "Nhap ten tac gia: ";
	cin.ignore();
	cin.getline(TenTacGia, 20);
}

void TieuThuyet::Xuat()
{
	Sach::Xuat();
	cout << "\nTen tac gia: " << TenTacGia;
	cout << endl;
}
