#include "NhanVienQuanLy.h"
#include "NhanVienSanXuat.h"
#include "NhanVienVanPhong.h"

int main()
{
	NhanVien* A[50];
	int SoNhanVien, LuaChon;

	cout << "Nhap so nhan vien: ";
	cin >> SoNhanVien;

	for (int i = 0; i < SoNhanVien; i++)
	{
		cout << "\nChon nhan vien: ";
		cout << " Nhan vien van phong (1) ";
		cout << " Nhan vien san xuat (2) ";
		cout << " Nhan vien quan ly (3) ";

		cout << "\nNhap lua chon: ";
		cin >> LuaChon;

		switch (LuaChon)
		{
			case 1: 
				A[i] = new NhanVienVanPhong();
				break;

			case 2: 
				A[i] = new NhanVienSanXuat();
				break;

			case 3: 
				A[i] = new NhanVienQuanLy();
				break;
		}
		A[i] -> Nhap();
	}

	float TongLuong = 0;
	for (int i = 0; i < SoNhanVien; i++)
		TongLuong += A[i] -> TinhLuong();
	cout << "\nTong luong = " << (size_t)TongLuong << endl;

	system("pause");
	return 0;
}