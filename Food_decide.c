#include <stdio.h>
int main()
{int num;
printf("Enter any number from 1 to 5: ");
scanf("%d",&num);

 switch(num)
 {case 1:printf("Burger\nRs 129");
        break;
 case 2:printf("French Fries\nRs 99");
        break;
 case 3:printf("Pizza\nRs 239");
        break;
 case 4:printf("Sandwich\nRs 149");
        break;
 case 5:printf("Pasta\nRs 179");
        break;
 }
}
