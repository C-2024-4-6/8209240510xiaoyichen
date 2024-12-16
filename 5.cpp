#include<iostream>
using namespace std;
class Point
{
private:
	int x, y;
public:
	Point(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
	void setPoint(int i, int j)
	{
		x = i + x;
		y = j + y;
	}
	void display()
	{
		cout << "(" << x << "," << y << ")" << endl;
	}
};
int main()
{
    Point A{ 60,80 };
	A.setPoint(5, 6);
	A.display();
	return 0;
}