#pragma once
#include <iostream>

namespace point
{
	class Point
	{
	protected:
		float x, y;
	public:
		// Point() { x = 0; y = 0; } // Traditional
		Point(): x(0), y(0) {}		 // Modern
		Point(float x, float y) : x(x), y(y) {}

		void write(std::ostream& ostream);

		void add();

		Point operator + (Point& point);

		void operator * (float sigma);

		friend std::ostream& operator << (std::ostream& ostream, point::Point point);
	};
}

