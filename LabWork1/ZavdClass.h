#pragma once
ref class ZavdClass
{
		double a, b;
	public:
		ZavdClass() { a = 1; b = 1; } // ���������������� �����������
		void Fn_b(double x, double y, double z); // ���������� ������� b[x,y,z]
		void Fn_a(double x, double y, double z); // ���������� ������� a[x,y,z,b]
	
		double Faktr(int n);
		void Fn_res(double y, double z);//Tabul
		
		double geta() { return a; }
		double getb() { return b; }
	};

