#include <stdio.h>
union item {
int a;
char b;
};

int main()
{

union item u;
 u.a =10;

 printf("%d \n",u.a);

 u.b='X';
 printf("%c \n",u.b);
 return 0;
 






}
