#include "DaGiac.h"

DaGiac::DaGiac()
{
	SoDinh = 0;
}

DaGiac::~DaGiac()
{
	delete[] ToaDoDinh;
}

void DaGiac::Nhap()
{
	ToaDoDinh = new Diem[SoDinh];

	for (int i = 0; i < SoDinh; i++)
	{
		cout << "\nNhap dinh thu " << i + 1 << ":\n";
		ToaDoDinh[i].NhapDiem();
	}	
}

void DaGiac::Xuat()
{
	for (int i = 0; i < SoDinh; i++)
		ToaDoDinh[i].XuatDiem();
}

void DaGiac::Ve()
{
	int* MangDiem = new int[SoDinh * 2 + 2]; // + 2 để nối với điểm đầu
	int j = 0;

	for (int i = 0; i < SoDinh; i++)
	{
		MangDiem[j] = ToaDoDinh[i].LayHoanhDo();
		MangDiem[j + 1] = ToaDoDinh[i].LayTungDo();
		j += 2;
	}

	MangDiem[SoDinh * 2] = ToaDoDinh[0].LayHoanhDo();
	MangDiem[SoDinh * 2 + 1] = ToaDoDinh[0].LayTungDo();

	drawpoly(SoDinh + 1, MangDiem); // + 1 để tính thêm điểm kết thúc khi nối lại với điểm đầu
	delete[] MangDiem;
}

void DaGiac::TinhTien(double HoanhDo, double TungDo)
{
	cout << "theo vecto (" << HoanhDo << ", " << TungDo << "): \n";

	for (int i = 0; i < SoDinh; i++)
	{
		ToaDoDinh[i].TinhTien(HoanhDo, TungDo);
		ToaDoDinh[i].XuatDiem();
	}		
}

void DaGiac::Zoom(double k)
{
	cout << "voi kich thuoc gap " << k << " lan: \n";
	double xNew, yNew;

	for (int i = 0; i < SoDinh; i++)
	{
		xNew = ToaDoDinh[i].LayHoanhDo() * k;
		yNew = ToaDoDinh[i].LayTungDo() * k;

		ToaDoDinh[i].TaoToaDo(xNew, yNew);
		ToaDoDinh[i].XuatDiem();
	}
}

void DaGiac::Quay(double angle)
{
	cout << "theo goc " << angle << " do: \n";

	for (int i = 0; i < SoDinh; i++)
	{
		ToaDoDinh[i].Quay(angle);
		ToaDoDinh[i].XuatDiem();
	}
}