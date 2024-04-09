#include <iostream>
#include <string>
#include "Header1.h"

int main() {
	Square sq(3.0);
	sq.CalculateArea();
	sq.ShowInfo();

	Triangle tr(2, 5);
	tr.CalculateArea();
	tr.ShowInfo();

	Circle cr(5);
	cr.CalculateArea();
	cr.ShowInfo();

	TriangularPyramid pyramid(6, 5, 4);
	pyramid.CalculateVolume();
	pyramid.ShowInfo();

	Cylinder cyl(7, 2);
	cyl.CalculateVolume();
	cyl.ShowInfo();


	Sphere sp(4);
	sp.CalculateVolume();
	sp.ShowInfo();


	return 0;
}
