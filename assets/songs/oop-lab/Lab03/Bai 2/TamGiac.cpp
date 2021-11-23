#include "TamGiac.h"

TamGiac::TamGiac()
{

}

TamGiac::TamGiac(Diem x, Diem y, Diem z)
{
	DiemA = x;
	DiemB = y;
	DiemC = z;
}

TamGiac::~TamGiac()
{

}

void TamGiac::NhapTamGiac()
{
	cout << "------------------- Nhap Tam Giac: -------------------";
	Diem AB, AC;

	do
	{
		cout << "\nNhap diem A:" << endl;
		DiemA.NhapDiem();

		cout << "\nNhap diem B:" << endl;
		DiemB.NhapDiem();

		cout << "\nNhap diem C:" << endl;
		DiemC.NhapDiem();

		cout << endl;

		// Tính vecto AB
		AB.TaoHoanhDo(DiemA.LayHoanhDo() - DiemB.LayHoanhDo());
		AB.TaoTungDo(DiemA.LayTungDo() - DiemB.LayTungDo());

		// Tính vecto AC
		AC.TaoHoanhDo(DiemA.LayHoanhDo() - DiemC.LayHoanhDo());
		AC.TaoTungDo(DiemA.LayTungDo() - DiemC.LayTungDo());

		// Lặp đến khi 2 vecto ko còn cùng phương
	} while (AB.LayHoanhDo() * AC.LayTungDo() == AB.LayTungDo() * AC.LayHoanhDo());
}

void TamGiac::XuatTamGiac()
{
	cout << "Tam giac duoc tao boi 3 diem: ";

	cout << "A";
	DiemA.XuatDiem();

	cout << ", B";
	DiemB.XuatDiem();

	cout << ", C";
	DiemC.XuatDiem();

	cout << endl;
}

void TamGiac::TinhTienTamGiac(float x, float y)
{
	cout << "\n---------------------- Tinh tien theo vecto (" << x << ", " << y << "): ----------------------\n";
	DiemA.TinhTien(x, y);
	DiemB.TinhTien(x, y);
	DiemC.TinhTien(x, y);
}

void TamGiac::QuayTamGiac(float angle)
{
	cout << "\n----------------------------- Quay goc " << angle << " do: ------------------------------\n";
	DiemA.Quay(angle);
	DiemB.Quay(angle);
	DiemC.Quay(angle);
}

void TamGiac::ThuPhongTamGiac(float k)
{
	cout << "\n--------------------------- Kich thuoc x" << k << " lan: -----------------------------\n";
	DiemA.TaoHoanhDo(DiemA.LayHoanhDo() * k);
	DiemA.TaoTungDo(DiemA.LayTungDo() * k);

	DiemB.TaoHoanhDo(DiemB.LayHoanhDo() * k);
	DiemB.TaoTungDo(DiemB.LayTungDo() * k);

	DiemC.TaoHoanhDo(DiemC.LayHoanhDo() * k);
	DiemC.TaoTungDo(DiemC.LayTungDo() * k);
}

void TamGiac::VeTamGiac()
{
	initwindow(400, 400, "Ve tam giac trong che do do hoa");

	line(DiemA.LayHoanhDo(), DiemA.LayTungDo(), DiemB.LayHoanhDo(), DiemB.LayTungDo());
	line(DiemB.LayHoanhDo(), DiemB.LayTungDo(), DiemC.LayHoanhDo(), DiemC.LayTungDo());
	line(DiemC.LayHoanhDo(), DiemC.LayTungDo(), DiemA.LayHoanhDo(), DiemA.LayTungDo());
}
