#include <stdio.h>

int main()
{
    int n, i, x = 0, y = 1, z, sum = 0;
 printf("Enter number of terms: ");
scanf("%d", &n);

for(i = 1; i <= n; i++)
{
printf("%d ", x);

if(x % 2 == 0)
{
    sum = sum + x;
}

z = x + y;
x = y;
    y = z;
    }

    printf("\nSum of even terms = %d", sum);

    return 0;
}