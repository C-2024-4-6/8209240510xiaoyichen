#include <iostream>
using namespace std;

int main() {
    int a = 0,b = 0,d = 0,e = 0;  
    char c;
    while ((c = getchar()) != '\n')
    {  
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))   
        a++;
        else if (c == ' ') 
        b++;
        else if (c >= '0' && c <= '9')  d++;
        else  e;
    }
    cout << "Ӣ����ĸ�ĸ���: " << a << endl;
    cout << "�ո�ĸ���: " << b << endl;
    cout << "�����ַ��ĸ���: " << d << endl;
    cout << "�����ַ��ĸ���: " << e << endl;
    return 0;
}