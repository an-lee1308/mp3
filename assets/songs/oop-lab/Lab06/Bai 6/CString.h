#pragma once
#include<iostream>
#include<string>
using namespace std;

class CString
{
	private:
		string s;
	public:
		CString();
		~CString();

		friend ostream& operator<<(ostream& out, const CString& a);
		friend istream& operator>>(istream& in, CString& a);

		CString operator+(const CString& a);
		void operator=(const CString& a);
		bool operator==(const CString& a);
};