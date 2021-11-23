#include "HocSinh.h"

void HocSinh::NhapThongTin()
{
	cout << "\nThong tin hoc sinh:\n";
	ConNguoi::NhapThongTin();

	cout << "Nhap diem Toan: ";
	cin >> DiemToan;

	cout << "Nhap diem Van: ";
	cin >> DiemVan;
}

void HocSinh::XuatThongTin()
{
	ConNguoi::XuatThongTin();

	cout << "\nDiem Toan: " << DiemToan;
	cout << "\nDiem Van: " << DiemVan;
	cout << endl;
}
