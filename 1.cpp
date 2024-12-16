#include<iostream>
using namespace std;
class Time            
{
private:              
	int hour;
	int minute;
	int sec;
public:
	void Timeset(int hour, int minute, int sec)
	{
		this->hour = hour;
		this->minute = minute;
		this->sec = sec;
	}
	void Show()
	{
		cout << hour << ":" << minute << ":" << sec << endl;
	}
};
int main()
{
    Time t1;       
	int h, m, s;
	cin >> h >> m >> s;
	t1.Timeset(h, m, s);
	t1.Show();
	return 0;
}
