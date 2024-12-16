#include<iostream>
using namespace std;
class Student         
{
private:
	int num;
    const char* name;
	char sex;
public:              
	void display();
	void setvalue(int num,const char* name,char sex)
	{
		this->num = num;
		this->name = name;
		this->sex = sex;
	}
};

