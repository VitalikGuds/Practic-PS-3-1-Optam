//Следом квадратной матрицы называется сумма элементов, расположенных на главной диагонали.Даны квадратная матрица порядка m, натуральное число n. Вычислить следы матриц A^2


#include <iostream>
using namespace std;
 
int main() {
	int m,n;
	cin >> m >> n;
	int A[m][m];
	int B[m][m]; 
	int C[m][m]; 
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin >> A[i][j];
			B[i][j]=A[i][j];
		}
	}
	int sum=0;
	int result=0;
	if(n>0)
	{
		for(int i=0;i<m;i++)
		{
			result+=B[i][i]; //нахождение исходной матрицы
		}
		cout << result << " ";
	}
	for(int q=0;q<n-1;q++)
	{
		for(int i=0;i<m;i++) //перемножения матриц
        {
           for(int z=0;z<m;z++)
           {
           		for(int j=0;j<m;j++)
				{
					sum+=A[i][j]*B[j][z];
				}
				C[i][z]=sum; 
				sum=0;
			}
		}
		for(int i=0;i<m;i++) //переприсваивание елементов матрицы
		{
			for(int j=0;j<m;j++)
			{
				B[i][j]=C[i][j];
			}
		}
		result=0;
		for(int i=0;i<m;i++)
		{
			result+=B[i][i]; // нахождение следа полученной матрицы
		}
		cout << result << " ";
	}
	return 0;
}
