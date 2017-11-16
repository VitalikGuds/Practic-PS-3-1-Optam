//найти значения выражения (2*5!)+(3*8!)/(6!+4!);



#include<iostream>
#include<cmath>
using namespace std;

float fact(float q){ 
    return !q ? 1 : q*fact(q - 1);}
 
float funct(float n=5, float m=8, float c=6, float b=4){ 
      return ( (2 * fact(n)) + (3 * fact(m))/(fact(c)+fact(b)));      
}
    
int main(){
int a=funct();
cout<<"Resultat: "<<a;
 
system("pause");         
return 0;}

