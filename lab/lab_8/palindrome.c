#include <stdio.h>

int main()
{
    int n, x, i, y = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    x = n;

    while(n > 0)
    {
        i = n % 10;
        y = y * 10 + i;
        n = n / 10;
    }

    if(x == y)
    {
        printf("Palindrome number");
    }
    else
    {
        printf("Not a palindrome number");
    }

    return 0;
}