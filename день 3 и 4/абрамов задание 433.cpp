//Даны действительные числа s,t,a0,....,a12.Получить P(1)p(t)+p2(s t)p3(1);




#include <iostream>
#include <math.h>
using namespace std;
double p(double x, double a[13])
{
    double sum=0;
    for(int i = 12; i >= 0; i--) {
        sum += a[i]*pow(x, i);
    }
 
    return sum;
}
 
 int  main() 
{
    double a[13] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    double s, t, result;
 
    cin >> s >> t;
 
    result = p(1, a) - p(t, a) + pow(p(s-t, a), 2) - pow(p(1, a), 3);
    cout << result;
    
}
