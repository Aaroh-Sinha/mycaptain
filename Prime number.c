#include <stdio.h>
void prime(int x);
int main()
{
  int num;
  printf("Enter the number: ");
  scanf("%d",&num);
  if(num==1)
  printf("1 is a prime number");
  else if(num==2)
  printf("2 is an even prime number");
  else
  prime(num);}
  
  void prime(int x)
  {
  //for(i=2;i<=num-1;i++)
  int j,k,t;
  j=2;
  t=x%j;
  j++;
  if(t==0)
  printf("%d is not a prime number",x);
  //return 1;
  
  else
  {
   if(j==x)
   {printf("%d is a prime number",x);}
   //return 1;}
   else
   prime(x);
  }
  }
