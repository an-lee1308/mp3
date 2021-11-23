#pragma once
#include "DaGiac.h"

class TuGiac : public DaGiac
{
	protected:
		Diem DiemGoc;
		double Dai, Rong;

	public:
		TuGiac();
		virtual ~TuGiac();

		virtual void Nhap();
		virtual void Xuat();

		virtual void Ve();
		virtual void TinhTien(double, double);
		virtual void Zoom(double);
		virtual void Quay(double);

		void NhapDacBiet();
};

