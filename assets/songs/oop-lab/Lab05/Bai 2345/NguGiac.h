#pragma once
#include "DaGiac.h"

class NguGiac : public DaGiac
{
	public:
		NguGiac();
		~NguGiac();

		void Nhap();
		void Xuat();

		void Ve();
		void TinhTien(double, double);
		void Zoom(double);
		void Quay(double);
};

