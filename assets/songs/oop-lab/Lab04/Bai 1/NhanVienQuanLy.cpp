#include "NhanVienQuanLy.h"

void NhanVienQuanLy::Nhap()
{
	NhanVien::Nhap();

	cout << "Nhap he so chuc vu: ";
	cin >> HeSoChucVu;

	cout << "Nhap thuong: ";
	cin >> Thuong;
}

void NhanVienQuanLy::Xuat()
{
	NhanVien::Xuat();

	cout << "\nHe so chuc vu: " << HeSoChucVu;
	cout << "\nThuong: " << Thuong;
}

float NhanVienQuanLy::TinhLuong()
{
	Luong = LuongCoBan * HeSoChucVu + Thuong;
	return Luong;
}
