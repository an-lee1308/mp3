#pragma once
#include "Diem.h"

class DaGiac
{
	private:
		int SoDinh;
		Diem* DanhSachDinh;

	public:
		DaGiac();
		~DaGiac();

		void NhapDaGiac();
		void XuatDaGiac();

		void TinhTienDaGiac(float, float);
		void QuayDaGiac(float);

		void ThuPhongDaGiac(float);
		void VeDaGiac();
};

