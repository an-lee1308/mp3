#pragma once
#include "ConNguoi.h"

class SinhVien : public ConNguoi
{
	private:
		float DiemLT;
		float DiemTH;

	public:
		void NhapThongTin();
		void XuatThongTin();
};

