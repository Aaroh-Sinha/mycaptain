#include <stdio.h>
int main()
{
float num_1,num_2;
printf("Enter the first number: ");
scanf("%f",&num_1);
printf("Enter the second number: ");
scanf("%f",&num_2);
printf("originally num1= %f and num2= %f\n",num_1,num_2);
num_1= num_1 + num_2;
num_2= num_1 - num_2;
num_1= num_1 - num_2;
printf("After swapping  num1= %f and num2= %f",num_1,num_2);

}
