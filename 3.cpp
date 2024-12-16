#include<iostream>
using namespace std;
class Cuboid
{
private:
	int length;
	int width;
	int height;
public:
	void volume(int length, int width, int height)
	{
		this-> length = length;
		this-> width = width;
		this-> height = height;
	}
	void Show() const
	{
		cout<< height * width * length <<endl;
	}
};
int main()
{

	int l1, l2, l3, w1, w2, w3, h1, h2, h3;
	Cuboid C1, C2, C3;
	cout << "请依次输入三个长方体的长，宽，高"<<endl;
	cin >> l1 >> w1 >> h1 >> l2 >> w2 >> h2 >> l3 >> w3 >> h3;
	C1.volume(l1, w1, h1);
	C2.volume(l2, w2, h2); 
	C3.volume(l3, w3, h3);
	C1.Show();
	C2.Show();
	C3.Show();
}