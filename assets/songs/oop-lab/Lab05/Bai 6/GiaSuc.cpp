#include "GiaSuc.h"

GiaSuc::GiaSuc()
{
	SoLuongBanDau = SoCon = SoLitSua = 0;
}

void GiaSuc::NhapSLBD()
{
	cin >> SoLuongBanDau;
}

int GiaSuc::SinhCon()
{
	srand(time(0));
	for (int i = 0; i < SoLuongBanDau; i++)
		SoCon = SoCon + rand() % 50;
	return SoCon;
}
