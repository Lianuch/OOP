#include <iostream>
#include "ZavdClass.h"
#include "Math.h"
using namespace std;
// Обчислення функції b[x,y,z]
void ZavdClass::Fn_b(double x, double y, double z)
{
	double b1 =(x+y)/fabs(pow(z,0.34));
	double b2 = pow(y,2)/Faktr(3)  + pow(z,3)/Faktr(5);
	double b3 = exp(x-y) / (z + y);
	b = 1-(b1 + b2 + b3);
}
//Factorial
double ZavdClass::Faktr(int n)
{
	double f = 1;
	if (n > 1)
		for (int i = 2; i <= n; i++)
			f *= i;
	return f;
}
//Tabul
void ZavdClass::Fn_res(double y,double z)
{
	ZavdClass Tabul;
	for (float x = -1; x <= 1; x += 0.2)
	{

		Tabul.Fn_a(x, y, z);
		Tabul.Fn_b(x, y, z);
		std::cout << "Result a:" << Tabul.geta() << std::endl;
		std::cout << "Result b:" << Tabul.geta() << std::endl;
	}


}



// Обчислення функції a[x,y,z,b]
void ZavdClass::Fn_a(double x, double y, double z)
{
	double a1 = (y-sqrt(fabs(pow(x,2)-b)));
	double a2 = (y - pow(x, 2) / z + 4 * pow(y, 2));
	double a3 = a1 * a2;
	double a = log(fabs(pow(a3,2/3)));
}

