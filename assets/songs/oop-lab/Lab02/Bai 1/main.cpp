#include "PhanSo.h"

int main()
{
	PhanSo a, b;
	PhanSo TongPhanSo, HieuPhanSo;
	PhanSo TichPhanSo, ThuongPhanSo;

	a.NhapPhanSo();
	a.RutGon();
	cout << "Phan so vua nhap la: ";
	a.XuatPhanSo();

	cout << endl;
	b.NhapPhanSo();
	b.RutGon();
	cout << "Phan so vua nhap la: ";
	b.XuatPhanSo();

	cout << endl;
	TongPhanSo = a.CongPhanSo(b);
	cout << "Tong 2 phan so vua nhap la: ";
	TongPhanSo.XuatPhanSo();
	
	HieuPhanSo = a.TruPhanSo(b);
	cout << "Hieu 2 phan so vua nhap la: ";
	HieuPhanSo.XuatPhanSo();

	TichPhanSo = a.NhanPhanSo(b);
	cout << "Tich 2 phan so vua nhap la: ";
	TichPhanSo.XuatPhanSo();

	ThuongPhanSo = a.ChiaPhanSo(b);
	cout << "Thuong 2 phan so vua nhap la: ";
	ThuongPhanSo.XuatPhanSo();
	cout << endl;

	system("pause");
	return 0;
}