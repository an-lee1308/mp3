#include "NhanVienVanPhong.h"

void NhanVienVanPhong::Nhap()
{
	NhanVien::Nhap();

	cout << "Nhap so ngay lam viec: ";
	cin >> SoNgayLamViec;

	cout << "Nhap tro cap: ";
	cin >> TroCap;
}

void NhanVienVanPhong::Xuat()
{
	NhanVien::Xuat();

	cout << "\nSo ngay lam viec: " << SoNgayLamViec;
	cout << "\nTro cap: " << TroCap;
}

float NhanVienVanPhong::TinhLuong()
{
	Luong = LuongCoBan + SoNgayLamViec * 100000 + TroCap;
	return Luong;
}