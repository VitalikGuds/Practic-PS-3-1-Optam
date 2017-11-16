//Описать функцию F(m,n)=n!*m!/(n+m)!, где n, m - неотрицательные целые числа. - C++
#include<iostream>
#include<cmath>
using namespace std;
float fact(float q){ 
    return !q ? 1 : q*fact(q - 1);}
 
float funct(float n, float m){ 
      return (fact(n) * fact(m)) / fact(n+m);      
}
    
int main(){
float n, m;
cout<<"enter the N:"<<endl;
cin>>n;
 
cout<<"enter the M:"<<endl;
cin>>m;
cout<<"Resultat: "<<funct(n, m);
 
system("pause");         
return 0;}


