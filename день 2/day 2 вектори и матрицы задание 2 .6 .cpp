//в масиве Х(m,n)каждный елемент (кроме граничных)заменить суммой непосредственно примыкающих к нему элементов по вертикали,горизонтали и диагоналям;


#include <iostream>
#include <conio.h>
#include <cstdlib>
using namespace std;
int mod(int a);
int main()
{
const int n=3;
const int m=3;
int a[n][m];
int sum=0;
for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
a[i][j]=rand()%10;
}
}
for(int i=1;i<n-1;i++)
for(int j=1;j<m-1;j++){

for(int q=0;q<n;q++){
for(int w=0;w<m;w++){
if((mod(i-q)<=1)&&(mod(j-w)<=1))
{sum+=a[q][w];}};
a[i][j]=sum-a[i][j];
}
for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
cout<<a[i][j]<<"\t";
}
cout<<"\n";
}
_getch();
return 0;
}
}
int mod(int a){
if(a>0) return a;
else
return -a;
}
