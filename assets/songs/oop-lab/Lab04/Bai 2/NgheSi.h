#pragma once
#include "ConNguoi.h"
class NgheSi : public ConNguoi
{
	private:
		char TheLoai[20];
		int TuoiNghe;

	public:
		void NhapThongTin();
		void XuatThongTin();
};

