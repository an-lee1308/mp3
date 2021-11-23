#include "TapChi.h"

void TapChi::Nhap()
{
	cout << "\nThong tin Tap chi:\n";
	Sach::Nhap();

	cout << "Nhap the loai: ";
	cin.ignore();
	cin.getline(TheLoai, 20);
}

void TapChi::Xuat()
{
	Sach::Xuat();
	cout << "\nThe loai: " << TheLoai;
	cout << endl;
}
