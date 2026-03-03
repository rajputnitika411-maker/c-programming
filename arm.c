#include<stdio.h>
int main()
{ int digit,sum=0,n,temp;

printf("enter the number");
scanf("%d",&n);

temp=n;
while(n!=0)
{digit=n%10;
sum=sum+digit*digit*digit;
n=n/10;
 }
 if(sum==temp)
 {printf("%d is an armstrong number",temp);
}
else
{ printf("%d is not an armstrong number",temp);
}
return 0;
}