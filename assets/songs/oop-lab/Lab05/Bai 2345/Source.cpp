#include "TamGiac.h"
#include "TuGiac.h"
#include "NguGiac.h"

#include "HinhBinhHanh.h"
#include "HinhChuNhat.h"
#include "HinhVuong.h"

int main()
{
	DaGiac** DanhSachHinh;
	int SoLuong;
	int LuaChon;

	cout << "Nhap so luong hinh: ";
	cin >> SoLuong;

	DanhSachHinh = new DaGiac*[SoLuong];

	for (int i = 0; i < SoLuong; i++)
	{
		cout << "\nChon kieu hinh:  1. Tam giac  2. Tu giac  3. Ngu giac\n";
		cout << "Nhap lua chon: ";
		cin >> LuaChon;

		switch (LuaChon)
		{
			case 1:
				DanhSachHinh[i] = new TamGiac(); // 100 100 200 200 300 100
				break;

			case 2:
				cout << "\nChon kieu tu giac:  1. Hinh binh hanh  2. Hinh chu nhat  3. Hinh vuong  4. Bat ky\n";
				cout << "Nhap lua chon: ";
				cin >> LuaChon;

				switch (LuaChon)
				{
					case 1:
						DanhSachHinh[i] = new HinhBinhHanh();
						break;

					case 2:
						DanhSachHinh[i] = new HinhChuNhat();
						break;

					case 3:
						DanhSachHinh[i] = new HinhVuong();
						break;

					case 4:
						DanhSachHinh[i] = new TuGiac();  // 100 100 100 200 300 200 300 100
						break;

					default:
						return 0;
				}
				break;

			case 3:
				DanhSachHinh[i] = new NguGiac(); // 100 100 100 200 200 300 300 200 300 100
				break;

			default:
				return 0;
		}

		DanhSachHinh[i] -> Nhap();
	}

	for (int i = 0; i < SoLuong; i++)
	{
		DanhSachHinh[i] -> Xuat();
		DanhSachHinh[i] -> Ve();
		DanhSachHinh[i] -> TinhTien(4, 3);
		DanhSachHinh[i] -> Zoom(2);
		DanhSachHinh[i] -> Quay(30);
		cout << endl;
	}
		

	system("pause");
	return 0;
}