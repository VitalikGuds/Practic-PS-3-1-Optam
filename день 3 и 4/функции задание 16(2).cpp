//Опредилить значение функции  y=F(a)=0.1*tg^2(x)-sin(4x) c промежутком -2pi<<x<<2pi и шагом h=0.5
#include <iostream>
#include <math.h>
using namespace std;
 
double F(double x)
{
	int tan=1,sin=1;
    for(double x=-2.*M_PI;x<=2.*M_PI;x+=0.5)
   cout<<x<<'\t'<<0.1*tan(x)*tan(x)-sin(4.*x)<<endl;
   return 0;
}
 
 

