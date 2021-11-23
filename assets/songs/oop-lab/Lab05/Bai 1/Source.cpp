#include "SachGiaoKhoa.h"
#include "TieuThuyet.h"
#include "TapChi.h"

int main()
{
	Sach** DanhSach;
	int SoLuong;
	int LuaChon;

	cout << "Nhap so luong sach: ";
	cin >> SoLuong;

	DanhSach = new Sach*[SoLuong];

	for (int i = 0; i < SoLuong; i++)
	{
		cout << "\n Chon loai sach:" << endl;
		cout << "1. Sach giao khoa" << endl;
		cout << "2. Tieu thuyet" << endl;
		cout << "3. Tap chi" << endl;

		cout << "Nhap lua chon: ";
		cin >> LuaChon;

		switch (LuaChon)
		{
			case 1:
				DanhSach[i] = new SachGiaoKhoa();
				break;

			case 2:
				DanhSach[i] = new TieuThuyet();
				break;

			case 3:
				DanhSach[i] = new TapChi();
				break;

			default:
				break;
		}

		DanhSach[i] -> Nhap();
	}

	cout << "\n======== Thong tin danh sach ========\n";
	for (int i = 0; i < SoLuong; i++)
		DanhSach[i] -> Xuat();

	system("pause");
	return 0;
}