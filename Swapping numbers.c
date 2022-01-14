#include <stdio.h>
int main()
{
int num_1,num_2;
printf("Enter the first number: ");
scanf("%d",&num_1);
printf("Enter the second number: ");
scanf("%d",&num_2);
printf("originally num1= %d and num2= %d\n",num_1,num_2);
num_1= num_1 + num_2;
num_2= num_1 - num_2;
num_1= num_1 - num_2;
printf("After swapping  num1= %d and num2= %d",num_1,num_2);
}
