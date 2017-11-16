//дано натуральное число n,вияснить,имеется ли среди чисел n,n+1 ,....2n близнецы,т.е простые числа , разность между которыми равна 2.

#include <math.h>
#include <stdio.h>
 
int isprime(int n) {
        int i;
        for(i = 2; i <= n/2; ++i) {
                if(n % i == 0)
                        return 0;
        }
 
        return 1;
}
 
int main()
{
        int i, j;
        int n = 10;
 
        for(i = n; i <= 2*n; ++i) {
                if(isprime(i)) {
                        for(j = i; j <= 2*n; ++j) {
                                if(isprime(j) && j-i == 2)
                                        printf("%d - %d == 2\n", i, j);
                        }
                }
        }
}
