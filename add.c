#include<stdio.h>
int main()
{int num,last,first,n;
printf("enter the number");
scanf("%d",&n);
num=n;
last=num%10;
while(n>=10)
{num=num/10;
}
first=num;
printf("sum of first and last digit=%d",first+last);
return 0;
} 