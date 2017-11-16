
//надо натуральное числа n. Среди чисел  1,2,....,n найти все те, которые можно представить в виде суммы квадратов двух натуральних чисел.



#include <stdio.h>
 
int sqrSum(int x, int y)
{
    return x * x + y * y;
}
 
int isCanRepresent(int target, int* x, int* y)
{
    int i, j;
 
    for (i = 1; i < target; i++)
        for (j = 1; j < target; j++)
            if (sqrSum(i, j) == target)
            {
                *x = i;
                *y = j;
                return 1;
            }
 
    return 0;
}
 
int main(void)
{
    int i, n, x, y;
 
    printf("N = ");
    scanf("%d", &n);
 
    for (i = 1; i < n; i++)
        if (isCanRepresent(i, &x, &y))
            printf("%d = %d^2 + %d^2\n", i, x, y);
 
    return 0;
}
