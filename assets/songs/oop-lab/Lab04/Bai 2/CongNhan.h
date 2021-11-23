#pragma once
#include "ConNguoi.h"
class CongNhan : public ConNguoi
{
	private:
		float Luong;
		int SoNgayLamViec;

	public:
		void NhapThongTin();
		void XuatThongTin();
};

