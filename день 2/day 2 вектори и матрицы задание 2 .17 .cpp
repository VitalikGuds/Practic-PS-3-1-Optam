

//� ������� A(m,n) ������� ������� a(ij)�������� ����������� ����� ��������� ���������� A(i,J)������������� � ����� ������� ���� ������� �

#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
 
int main()
{
  const int n=4;
  const int m=4;
  const int n2=2;
  const int m2=2;
  int a [n][m];
  srand( (unsigned)time( NULL ) );
  //���������� ���������� �������
  for (int i=0;i<n;i++)
  {
   for (int j=0;j<m;j++)
    a[i][j]=rand()%10;
  }
 
  //�����
  cout<<"ishodnaya matrica"<<endl;
  for (int i=0;i<n;i++)
  {
   for (int j=0;j<m;j++)
    cout<<a[i][j]<<" ";
   cout<<endl;
  }
 
//����� ���
    int min = a[0][0];
      for (int k=0; k<n2; k++)
        for (int l=0; l<m2; l++)
    { if (a[k][l]<min)
     min = a[k][l];
    }
 
  for (int i=0;i<n;i++)
   for (int j=0;j<m;j++)
    a[i][j]=min;
 
   cout<<"matrica"<<endl;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        cout<<a[i][j]<<" ";
        cout<<endl;
    }
 
  system("pause");
}
