#include <stdio.h>
int main()
{int marks;
printf("Enter the marks: ");
scanf("%d",&marks);
 if(marks>=85)
   printf("Your Grade is A");
 else if(marks>=70)
   printf("Your Grade is B");
 else if(marks>=55)
   printf("Your Grade is C");
 else if(marks>=40)
   printf("Your Grade is D");
 else
   printf("Your Grade is F");
}
  
