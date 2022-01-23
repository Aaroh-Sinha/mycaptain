#include <stdio.h>
int lcm(int num1,int num2,int max);
int main()
{int n1,n2,max;
printf("Enter two numbers");
scanf("%d %d",&n1,&n2);
if(n1>n2)
max=n1;
else
max=n2;
lcm(n1,n2,max);

}
int lcm(int num1,int num2,int max)
{if(max%num1==0 && max%num2==0)
printf("LCM of %d and %d is %d",num1,num2,max);
else
lcm(num1, num2,max+1);
}
