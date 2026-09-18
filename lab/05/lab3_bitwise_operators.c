#include<stdio.h>
int main(){

int a=15 , b=5;
printf("a&b(AND)=%d\n",a&b);   

printf("a|b(OR)=%d\n",a|b);

printf("a^b(XOR)=%d\n",a^b);   // make same input as=0,and different inputs=1

printf("~b(NOT)=%d\n",~b);   //compliments the value of b

printf("a>>b(right shift)=%d\n",a>>b);

printf("a<<b(left shift)=%d\n",a<<b);


return 0;



}