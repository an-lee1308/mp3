#include "Bo.h"

void Bo::NhapSLBD()
{
	cout << "Nhap so luong bo ban dau: ";
	GiaSuc::NhapSLBD();
}

void Bo::Keu()
{
	cout << "\nBo Bo Bo";
}

int Bo::SinhCon()
{
	return GiaSuc::SinhCon();
}

int Bo::ChoSua()
{
	for (int i = 0; i < SoLuongBanDau + SoCon; i++)
		SoLitSua = SoLitSua + rand() % 21;
	return SoLitSua;
}