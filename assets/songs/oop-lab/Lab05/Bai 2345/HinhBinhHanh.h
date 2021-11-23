#pragma once
#include "TuGiac.h"

class HinhBinhHanh : public TuGiac
{
	private:
		double GocNghieng;

	public:
		void Nhap();
		void Xuat();

		void Ve();
		void TinhTien(double, double);
		void Zoom(double);
		void Quay(double);
};

