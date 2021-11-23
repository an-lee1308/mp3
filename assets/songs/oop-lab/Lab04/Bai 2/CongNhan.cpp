#include "CongNhan.h"

void CongNhan::NhapThongTin()
{
	cout << "\nThong tin cong nhan:\n";
	ConNguoi::NhapThongTin();

	cout << "Nhap luong: ";
	cin >> Luong;

	cout << "Nhap so ngay lam viec: ";
	cin >> SoNgayLamViec;
}

void CongNhan::XuatThongTin()
{
	ConNguoi::XuatThongTin();

	cout << "\nLuong: " << (size_t)Luong;
	cout << "\nSo ngay lam viec: " << SoNgayLamViec;
	cout << endl;
}
