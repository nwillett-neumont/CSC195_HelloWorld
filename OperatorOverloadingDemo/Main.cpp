#include <iostream>
#include "Point.h"

//point::Point operator + (point::Point& pointA, point::Point& pointB)
//{
//	return point::Point(pointA.x, pointB.y);
//}

//void operator << (std::ostream& ostream, point::Point point)
//{
//	ostream << "(" << point.x << ", " << point.y << ")\n";
//}

int main()
{
	point::Point point = point::Point();

	point::Point definedPoint = point::Point(2.0f, 3.0f);

	definedPoint.write(std::cout);

	definedPoint.add();

	definedPoint.write(std::cout);

	point::Point piont = definedPoint + definedPoint;

	piont.write(std::cout);

	point::Point joint = piont + definedPoint;

	joint.write(std::cout);

	joint * 2.0f;

	joint.write(std::cout);

	std::cout << joint;

	return 0;
}