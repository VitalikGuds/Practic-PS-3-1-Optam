//���� ��� ����������� �����. �������� � ����� �� ��� ������ ����. (���������� �-� ��� ������ ���-�� ���� ����������� ������)


#include <iostream>
#include <conio.h>
using namespace std;
int Fun(int x)
{
    int count=0,buf;
    while(x>0)
    {
        buf=x%10;
        x/=10;
        count++;
    }
    return count;
}
int main()
{
    setlocale(0,"Rus");
    int a,b;
    cout<<"������� ������ �����: ";cin>>a;
    cout<<"������� ������ �����: ";cin>>b;
    if(Fun(a)>Fun(b)) cout<<"� ������� ����� ������ ����."<<endl;
    else if(Fun(a)<Fun(b)) cout<<"� ������� ����� ������ ����."<<endl;
    else if(Fun(a)==Fun(b)) cout<<"���������� ���� ���������."<<endl;
    cout<<
    getch();
    return 0;
}
