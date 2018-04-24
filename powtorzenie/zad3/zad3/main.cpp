#include <iostream>
#include <string>
#include <cmath>

using namespace std;

namespace poly{
class RegularPolyhedron {
public:
	RegularPolyhedron(double length_base,
					  double height, 
					  unsigned int number_of_sides);
	virtual double volume() = 0;
protected:
	double getArea();
	double getHeight();
private:
	double length_base;
	double area;
	double height;
	unsigned int number_of_sides;
};

class RegularPrism : public RegularPolyhedron {
public:
	RegularPrism(double length_base,
	double height,
	unsigned int number_of_sides)
		:RegularPolyhedron(length_base, 
						   height, 
						   number_of_sides) {}
	double volume() override;
};

class RegularPyramid : public RegularPolyhedron {
public:
	RegularPyramid(double length_base,
		double height,
		unsigned int number_of_sides) 
		:RegularPolyhedron(length_base,
						   height,
						   number_of_sides) {}
	double volume() override;
};

}

poly::RegularPolyhedron::RegularPolyhedron(double length_base, double height, unsigned int number_of_sides) {
	this->length_base = length_base;
	this->height = height;
	this->number_of_sides = number_of_sides;
	area = ((length_base*length_base) * number_of_sides) / (4 * ((tan(3.14 / number_of_sides))));
}

double poly::RegularPolyhedron::getArea() {
	return area;
}

double poly::RegularPolyhedron::getHeight() {
	return height;
}

double poly::RegularPrism::volume(){
	return (getArea()*getHeight());
}

double poly::RegularPyramid::volume() {
	return ((getArea()*getHeight())/3);
}



int main() {
	poly::RegularPolyhedron* p[3] = {&poly::RegularPrism(3.0, 2, 3),
		&poly::RegularPyramid(7.0, 3, 5),
		&poly::RegularPrism(5.0, 8, 3) };
	for (int i = 0; i < 3; i++) {
		cout << p[i]->volume() << endl;
	}
	
	system("pause");
	return 0;
}