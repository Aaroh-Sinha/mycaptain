#include <stdio.h>
int prime(int x,int j);
int main()
{
  int num;
  int y=2;
  printf("Enter the number: ");
  scanf("%d",&num);
  if(num==1)
  printf("1 is a prime number");
  else if(num==2)
  printf("2 is an even prime number");
  else
  prime(num,y);

}
  
  int prime(int x,int j)
  {
 
  int k,t,check;
  
  t=x%j;

  
  
  
   if(j==x)
   {printf("%d is a prime number",x);}
   //return 1;}
   else if(t==0)
  printf("%d is not a prime number",x);
   else
   {j++;
   check=prime(x,j);}
  }
  
