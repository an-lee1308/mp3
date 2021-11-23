#pragma once
#include "DaGiac.h"

class TamGiac : public DaGiac
{
	public:
		TamGiac();
		~TamGiac();

		void Nhap();
		void Xuat();

		void Ve();
		void TinhTien(double, double);
		void Zoom(double);
		void Quay(double);
};

