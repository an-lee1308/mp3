#pragma once
#include "Diem.h"

class DaGiac
{
	protected:
		int SoDinh;
		Diem* ToaDoDinh;
	
	public:
		DaGiac();
		virtual ~DaGiac();
		 
		virtual void Nhap();
		virtual void Xuat();

		virtual void Ve();
		virtual void TinhTien(double, double);
		virtual void Zoom(double);
		virtual void Quay(double);
};

