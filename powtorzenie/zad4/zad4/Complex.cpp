#include "Complex.h"



Complex::Complex()
{
	real_part = 0;
	imaginary_part = 0;
}

Complex::Complex(double real_part, double imaginary_part) :
					real_part(real_part),
					imaginary_part(imaginary_part) {}

double Complex::getReal()
{
	return real_part;
}

double Complex::getImaginary()
{
	return imaginary_part;
}

double Complex::module()
{
	return sqrt(getImaginary()*getImaginary() + getReal()*getReal());
}

Complex::~Complex()
{
}
