#include "SinhVien.h"
#include "HocSinh.h"
#include "CongNhan.h"
#include "NgheSi.h"
#include "CaSi.h"

int main()
{
	ConNguoi **DanhSach;
	int SoNguoi, LuaChon;

	cout << "Nhap so nguoi trong danh sach: ";
	cin >> SoNguoi;

	DanhSach = new ConNguoi*[SoNguoi];

	for (int i = 0; i < SoNguoi; i++)
	{
		cout << "\nMenu: ";
		cout << " Sinh vien (1) ";
		cout << " Hoc sinh (2) ";
		cout << " Cong nhan (3) ";
		cout << " Nghe si (4) ";
		cout << " Ca si (5) ";

		cout << "\nNhap lua chon: ";
		cin >> LuaChon;

		switch (LuaChon)
		{
			case 1:
				DanhSach[i] = new SinhVien;
				break;
			case 2:
				DanhSach[i] = new HocSinh;
				break;

			case 3:
				DanhSach[i] = new CongNhan;
				break;

			case 4:
				DanhSach[i] = new NgheSi;
				break;

			case 5:
				DanhSach[i] = new CaSi;
				break;
		}

		DanhSach[i] -> NhapThongTin();
	}

	for (int i = 0; i < SoNguoi; i++)
		DanhSach[i] -> XuatThongTin();

	system("pause");
	return 0;
}