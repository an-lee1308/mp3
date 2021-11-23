#include "NgheSi.h"

void NgheSi::NhapThongTin()
{
	cout << "\nThong tin nghe si:\n";
	ConNguoi::NhapThongTin();

	cout << "Nhap the loai trinh dien: ";
	cin.ignore();
	cin.getline(TheLoai, 20);

	cout << "Nhap tuoi nghe: ";
	cin >> TuoiNghe;
}

void NgheSi::XuatThongTin()
{
	ConNguoi::XuatThongTin();

	cout << "\nThe loai trinh dien: " << TheLoai;
	cout << "\nSo tuoi nghe: " << TuoiNghe;
	cout << endl;
}