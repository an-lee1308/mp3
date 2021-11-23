#include "NhanVienSanXuat.h"

void NhanVienSanXuat::Nhap()
{
	NhanVien::Nhap();

	cout << "Nhap so san pham: ";
	cin >> SoSanPham;
}

void NhanVienSanXuat::Xuat()
{
	NhanVien::Xuat();
	cout << "\nSo san pham: " << SoSanPham;
}

float NhanVienSanXuat::TinhLuong()
{
	Luong = LuongCoBan + SoSanPham * 5000;
	return Luong;
}
