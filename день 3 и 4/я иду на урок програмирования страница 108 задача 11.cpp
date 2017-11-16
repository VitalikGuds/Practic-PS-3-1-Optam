//даны два натуральных числа . Выяснить в каком из них больше цифр


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
    
    int a,b;
    cout<<"Enter the first number: ";cin>>a;
    cout<<"Enter the second number: ";cin>>b;
    if(Fun(a)>Fun(b)) cout<<"The first number has more digits."<<endl;
    else if(Fun(a)<Fun(b)) cout<<"The second number has more digits."<<endl;
    else if(Fun(a)==Fun(b)) cout<<"Number of digits is the same."<<endl;
    cout<<
    getch();
    return 0;
}
