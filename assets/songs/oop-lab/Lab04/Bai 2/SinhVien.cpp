#include "SinhVien.h"

void SinhVien::NhapThongTin()
{
	cout << "\nThong tin sinh vien:\n";
	ConNguoi::NhapThongTin();

	cout << "Nhap diem Ly thuyet: ";
	cin >> DiemLT;

	cout << "Nhap diem Thuc hanh: ";
	cin >> DiemTH;
}

void SinhVien::XuatThongTin()
{
	ConNguoi::XuatThongTin();

	cout << "\nDiem Ly thuyet: " << DiemLT;
	cout << "\nDiem Thuc hanh: " << DiemTH;
	cout << endl;
}
