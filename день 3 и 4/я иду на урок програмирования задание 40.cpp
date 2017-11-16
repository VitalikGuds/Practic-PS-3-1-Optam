//Даны первый член и n разность арефметичиской прогресии .Написать рекурсивную функцию а)нахождения n-члена прогресии b)нахождение сумы n первых членов прогресии
#include <iostream>
 
using namespace std;
 
int member(int memb, int dif, int n)
{
    if (n) memb=dif+member(memb, dif, n-1);
    return memb;
}
 
int summa(int sum, int dif, int n)
{
    if (n) sum+=(n*dif)+summa(sum, dif, n-1);
    return sum;
}
 
int main()
{
    int N;
    int differ;
    int first;
    cin >> N;
    cin >> differ;
    cin >> first;
    cout << "nagozdenie n progresii  " <<  member(first, differ, N-1) << endl;
    cout << "nahozdenie sym n pervix chlenov progres  " << summa(first, differ, N-1) << endl;
    return 0;
}
