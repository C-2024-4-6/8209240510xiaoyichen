#include <iostream>
using namespace std;
int main()
{
    float a, b, c,A;
    cin >> a >> b >> c;
    if (a + b > c && b + c > a && a + c > b)
    {
        A = a + b + c;
        cout << "�������ܳ�Ϊ" << A<<endl;
        if (a == b || a == c || b == c) cout << "�ǵ���������" << endl;
        else cout << "���ǵ���������" << endl;
    }
    else cout << "�޷�����������" << endl;
}

