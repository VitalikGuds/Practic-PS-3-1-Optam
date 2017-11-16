//Даны два натуральных числа. Выяснить в каком из них больше цифр. (определить ф-ю для ращета кол-ва цифр натуральног очисла)


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
    cout<<"Введите первое число: ";cin>>a;
    cout<<"Введите второе число: ";cin>>b;
    if(Fun(a)>Fun(b)) cout<<"У первого числа больше цифр."<<endl;
    else if(Fun(a)<Fun(b)) cout<<"У второго числа больше цифр."<<endl;
    else if(Fun(a)==Fun(b)) cout<<"Количество цифр совпадает."<<endl;
    cout<<
    getch();
    return 0;
}
