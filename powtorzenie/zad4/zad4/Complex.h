#pragma once
#include <cmath>
class Complex
{
public:
	Complex();
	Complex(double real_part, double imaginary_part);
	double getReal();
	double getImaginary();
	double module();
	~Complex();
private:
	double real_part;
	double imaginary_part;
};

