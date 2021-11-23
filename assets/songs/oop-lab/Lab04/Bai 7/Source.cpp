// Hình vuông và hình chữ nhật.
class HinhChuNhat
{
	//...
};
class HinhVuong : public HinhChuNhat
{
	//...
};

//	Đa giác và điểm.
class Diem
{
	//...
};

class DaGiac
{
private:
	Diem* diem;
};

// Giám đốc và nhân viên.
class NhanVien
{
	//...
};
class GiamDoc : public NhanVien
{
	//...
};

// Hình ellipse và hình tròn.
class Ellipse
{
	//...
};
class HinhTron : public Ellipse
{
	//...
};

// Máy bay và động cơ máy.
class DongCoMay
{
	//...
};

class MayBay
{
private:
	DongCoMay* dongcomay;
};

// Câu và từ.
class Tu
{
	//...
};

class Cau
{
private:
	Tu* tu;
};

// Hàng hóa và mỹ phẩm.
class HangHoa
{
	//...
};
class MyPham : public HangHoa
{
	//...
};

// Cây trồng và cây lúa.
class CayTrong
{
	//...
};
class CayLua : public CayTrong
{
	//...
};

// Thư viện và sách.
class Sach
{
	//...
};

class ThuVien
{
private:
	Sach* sach;
};

// Phim ảnh và phim hoạt hình.
class PhimAnh
{
	//...
};
class PhimHoatHinh : public PhimAnh
{
	//...
};
