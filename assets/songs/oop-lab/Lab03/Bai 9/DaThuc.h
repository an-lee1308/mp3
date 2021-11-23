#pragma once
#include <iostream>
#include <iomanip>
using namespace std;

class DaThuc
{
	friend istream& operator>>(istream&, DaThuc&);
	friend ostream& operator<<(ostream&, const DaThuc&);
	
	private:
		int* HeSo;
		int BacDaThuc;

	public:
		DaThuc(int);
		DaThuc(const DaThuc&);
		~DaThuc();

		const DaThuc& operator=(const DaThuc&);
		bool operator==(const DaThuc&);
		bool operator!=(const DaThuc&);

		DaThuc operator+(const DaThuc&);
		DaThuc operator-(const DaThuc&);
		DaThuc operator*(const DaThuc&);
		DaThuc operator/(const DaThuc&);

		DaThuc TinhDaoHamCap1();
		DaThuc TinhDaoHamCapk(int);
};

