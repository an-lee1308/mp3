#pragma once
#include "NhanVien.h"

class NhanVienSanXuat : public NhanVien
{
	private:
		int SoSanPham;

	public:
		void Nhap();
		void Xuat();
		float TinhLuong();
};

