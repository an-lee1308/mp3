#include "Cuu.h"

void Cuu::NhapSLBD()
{
	cout << "Nhap so luong cuu ban dau: ";
	GiaSuc::NhapSLBD();
}

void Cuu::Keu()
{
	cout << "\nCuu Cuu Cuu";
}

int Cuu::SinhCon()
{
	return GiaSuc::SinhCon();
}

int Cuu::ChoSua()
{
	for (int i = 0; i < SoLuongBanDau + SoCon; i++)
		SoLitSua = SoLitSua + rand() % 6;
	return SoLitSua;
}