#include "CaSi.h"

void CaSi::NhapThongTin()
{
	cout << "\nThong tin ca si:\n";
	ConNguoi::NhapThongTin();

	cout << "Nhap the loai nhac: ";
	cin.ignore();
	cin.getline(TheLoai, 20);

	cout << "Nhap tuoi nghe: ";
	cin >> TuoiNghe;
}

void CaSi::XuatThongTin()
{
	ConNguoi::XuatThongTin();

	cout << "\nThe loai nhac: " << TheLoai;
	cout << "\nSo tuoi nghe: " << TuoiNghe;
	cout << endl;
}
