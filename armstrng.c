#include<stdio.h>
int main()
{ int digit,sum=0,n,temp;
  clrscr();
printf("enter the number");
scanf("%d",&n);
temp=n;
{digit=n%10;
sum=sum+digit*digit*digit;
n=n/10;
 }
 if(temp==sum)
 {printf("%d is an armstrong number",n);
}
else
{ printf("%d is not an armstrong number",n);
}
return 0;
}