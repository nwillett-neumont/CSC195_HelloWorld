#include "Point.h"

namespace point
{
	void point::Point::write(std::ostream& ostream)
	{
		ostream << "x: " << x << " y: " << y << std::endl;
	}
	void Point::add()
	{
		x = x + y;
		y = y + x;
	}
	Point Point::operator+(Point& point)
	{
		return Point(x + point.x, y + point.y);
	}
	void Point::operator*(float sigma)
	{
		x *= sigma; y *= sigma;
	}
	void operator << (std::ostream& ostream, point::Point point)
	{
		ostream << "(" << point.x << ", " << point.y << ")\n";
	}
}

//void point::Point::write(std::ostream& ostream) 
//{
//
//}