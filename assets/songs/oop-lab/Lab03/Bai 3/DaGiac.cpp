#include "DaGiac.h"

DaGiac::DaGiac()
{
}


DaGiac::~DaGiac()
{
	if (DanhSachDinh != NULL)
		delete[] DanhSachDinh;
}

void DaGiac::NhapDaGiac()
{
	cout << "Nhap so dinh cua da giac: ";
	cin >> SoDinh;

	DanhSachDinh = new Diem[SoDinh];

	for (int i = 0; i < SoDinh; i++)
	{
		cout << "\nDiem thu " << i + 1 << ":\n";
		DanhSachDinh[i].NhapDiem();
	}

	cout << endl;
}

void DaGiac::XuatDaGiac()
{
	cout << "Da giac duoc tao boi " << SoDinh << " diem: ";

	for (int i = 0; i < SoDinh; i++)
	{
		cout << "Diem thu " << i + 1;
		DanhSachDinh[i].XuatDiem();
		cout << "\t";
	}

	cout << endl;
}

void DaGiac::TinhTienDaGiac(float x, float y)
{
	cout << "\n---------------------- Tinh tien theo vecto (" << x << ", " << y << "): ----------------------\n";

	for (int i = 0; i < SoDinh; i++)
		DanhSachDinh[i].TinhTien(x, y);
}

void DaGiac::QuayDaGiac(float angle)
{
	cout << "\n----------------------------- Quay goc " << angle << " do: ------------------------------\n";
	
	for (int i = 0; i < SoDinh; i++)
		DanhSachDinh[i].Quay(angle);
}

void DaGiac::ThuPhongDaGiac(float k)
{
	cout << "\n--------------------------- Kich thuoc x" << k << " lan: -----------------------------\n";

	for (int i = 0; i < SoDinh; i++)
	{
		DanhSachDinh[i].TaoHoanhDo(DanhSachDinh[i].LayHoanhDo() * k);
		DanhSachDinh[i].TaoTungDo(DanhSachDinh[i].LayTungDo() * k);
	}
}

void DaGiac::VeDaGiac()
{
	int *MangDiem;
	MangDiem = new int[SoDinh * 2 + 2]; // + 2 để nối với điểm đầu

	int j = 0;
	for (int i = 0; i < SoDinh; i++)
	{
		MangDiem[j] = DanhSachDinh[i].LayHoanhDo();
		MangDiem[j + 1] = DanhSachDinh[i].LayTungDo();
		j += 2;
	}

	MangDiem[SoDinh * 2] = DanhSachDinh[0].LayHoanhDo();
	MangDiem[SoDinh * 2 + 1] = DanhSachDinh[0].LayTungDo();

	initwindow(400, 400, "Ve da giac trong che do do hoa");
	drawpoly(SoDinh + 1, MangDiem); // + 1 để tính thêm điểm kết thúc khi nối lại với điểm đầu
	delete[] MangDiem;
}
