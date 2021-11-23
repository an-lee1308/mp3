#pragma once
#include "Diem.h"

class TamGiac
{
	private:
		Diem DiemA;
		Diem DiemB;
		Diem DiemC;

	public:
		TamGiac();
		TamGiac(Diem, Diem, Diem);
		~TamGiac();

		void NhapTamGiac();
		void XuatTamGiac();

		void TinhTienTamGiac(float, float);
		void QuayTamGiac(float);

		void ThuPhongTamGiac(float);
		void VeTamGiac();
};

