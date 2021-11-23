#pragma once
#include <iostream>
using namespace std;

class SoPhuc
{
	private:
		double dThuc;
		double dAo;

	public:
		SoPhuc();

		SoPhuc operator +(const SoPhuc);
		SoPhuc operator -(const SoPhuc);
		SoPhuc operator *(const SoPhuc);
		SoPhuc operator /(const SoPhuc);

		bool operator ==(const SoPhuc);
		bool operator !=(const SoPhuc);
		bool operator !();

		friend istream& operator >>(istream&, SoPhuc&);
		friend ostream& operator <<(ostream&, SoPhuc);
};

