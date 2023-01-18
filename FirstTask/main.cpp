#include <iostream>
#include "Vector.h"

class Point
{
public:

	// Constructor with parametres
	Point(int xValue, int yValue) : x(xValue), y(yValue)
	{

	};
	// Default Constructor
	Point()
	{
		x = 0;
		y = 0;
	};

	// Print Method 
	void Print()
	{
		std::cout << "X: " << x << " Y: " << y << "\n";
	}

	// Get X field 
	int GetX()
	{
		return x;
	}

	// Get Y field 
	int GetY()
	{
		return y;
	}

private:
	int x;
	int y;
};

// Global Overload << operator for output Lvalue Point
std::ostream& operator<<(std::ostream& out, Point& obj)
{
	out << "\nX: " << obj.GetX() << " Y: " << obj.GetY() << '\n';
	return out;
}

int main()
{
	Vector<Point> PointVec{ Point(rand() % 10, rand() % 10),Point(rand() % 10, rand() % 10),Point(rand() % 10, rand() % 10) };
	for (int i = 0; i < PointVec.VectorSize(); i++)
	{
		std::cout << PointVec[i] << " ";
	}
}
