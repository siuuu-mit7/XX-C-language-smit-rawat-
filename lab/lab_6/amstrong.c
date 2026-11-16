#include <stdio.h>
int main(){

int i,sum=0,num,x;

printf("enter your number :", i);
scanf("%d",&i);
x=i;
   
while(i>0){
sum= sum+(i%10)*(i%10)*(i%10);
i=i/10; 

}
if(sum==x)
{
    printf(" it is amstrong number");
}
else{
printf("not an amstrong number ");
}


return 0;


}