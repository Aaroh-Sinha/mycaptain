#include <stdio.h>

int sum(int x);
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("Sum of digits is %d",sum(num));
    
}

int sum(int x)
{
int t,r;
int sum_digits;
t=x;
r=t%10;
t/=10;
if(t==0)
return r;
else
sum_digits=r+sum(t);

return sum_digits;
//printf("%d",sum_digits);
//return     
}

