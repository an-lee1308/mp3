#pragma once
#include <iostream>
#include <time.h>
using namespace std;

class GiaSuc
{
	protected:
		int SoLuongBanDau;
		int SoCon;
		int SoLitSua;

	public:
		GiaSuc();
		virtual void NhapSLBD();
		virtual int SinhCon();
		virtual int ChoSua() = 0;
		virtual void Keu() = 0;
};

