#include<iostream>
using namespace std;
class Student
{
public:
	int num;
	int score;
	 Student(int num, int score)
	{
		this->num = num;
		this->score = score;
	}
};
void max(Student* arr) {
	float max_score = arr[0].score;
	int k = 0;
	for (int i = 1; i < 5; i++) {
		if (arr[i].score > max_score) {
			max_score = arr[i].score;
			k = i;
		}
	}
	cout << "ѧ��Ϊ " << arr[k].num << " ��ѧ���ɼ���ߣ��ɼ�Ϊ " << arr[k].score << endl;
}
int main()
{
	Student A[5]= { {01,85},
		            {02,80},
			        {03,95},
		            {04,79},
		            {05,96} };
	Student * p = &A[0];
	max(p);
}