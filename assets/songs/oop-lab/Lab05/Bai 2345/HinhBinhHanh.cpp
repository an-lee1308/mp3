#include "HinhBinhHanh.h"

void HinhBinhHanh::Nhap()
{
	cout << "\n===== Nhap hinh binh hanh =====\n";

	cout << "Nhap chieu dai: ";
	cin >> Dai; // 200

	cout << "Nhap chieu cao: ";
	cin >> Rong; // 100

	cout << "Nhap goc nghieng: ";
	cin >> GocNghieng; // 45

	TuGiac::NhapDacBiet();

	double xNew, DoDaiThem;
	DoDaiThem = Rong / tan(GocNghieng * 3.141592 / 180);

	xNew = ToaDoDinh[0].LayHoanhDo() + DoDaiThem;
	ToaDoDinh[0].TaoToaDo(xNew, ToaDoDinh[0].LayTungDo());

	xNew = ToaDoDinh[3].LayHoanhDo() + DoDaiThem;
	ToaDoDinh[3].TaoToaDo(xNew, ToaDoDinh[3].LayTungDo());
}

void HinhBinhHanh::Xuat()
{
	cout << "\nHinh binh hanh:";
	TuGiac::Xuat();
}

void HinhBinhHanh::Ve()
{
	TuGiac::Ve();
}

void HinhBinhHanh::TinhTien(double HoanhDo, double TungDo)
{
	cout << "\nTinh tien hinh binh hanh: ";
	TuGiac::TinhTien(HoanhDo, TungDo);
}

void HinhBinhHanh::Zoom(double k)
{
	cout << "\nZoom hinh binh hanh: ";
	TuGiac::Zoom(k);
}

void HinhBinhHanh::Quay(double angle)
{
	cout << "\nQuay hinh binh hanh: ";
	TuGiac::Quay(angle);
}