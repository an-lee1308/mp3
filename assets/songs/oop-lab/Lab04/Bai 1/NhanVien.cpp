#include "NhanVien.h"

char* NhanVien::LayHoTen()
{
	return HoTen;
}

void NhanVien::Nhap()
{
	cout << "Nhap Ho Ten: "; 
	cin.ignore(); 
	cin.getline(HoTen, 20); 

	cout << "Nhap ngay thang nam sinh: "; 
	cin >> Ngay >> Thang >> Nam;

	cout << "Nhap Luong co ban: "; 
	cin >> LuongCoBan;
}

void NhanVien::Xuat()
{
	cout << "\nHo ten: " << HoTen;
	cout << "\nNgay thang nam sinh: " << Ngay << "/" << Thang << "/" << Nam;
	cout << "\nLuong co ban = " << LuongCoBan; 
	cout << "\nLuong = " << Luong; 
}

float NhanVien::TinhLuong()
{
	return 0;
}
