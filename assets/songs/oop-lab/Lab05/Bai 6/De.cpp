#include "De.h"

void De::NhapSLBD()
{
	cout << "Nhap so luong de ban dau: ";
	GiaSuc::NhapSLBD();
}

void De::Keu()
{
	cout << "\nDe De De";
}

int De::SinhCon()
{
	return GiaSuc::SinhCon();
}

int De::ChoSua()
{
	for (int i = 0; i < SoLuongBanDau + SoCon; i++)
		SoLitSua = SoLitSua + rand() % 11;
	return SoLitSua;
}


