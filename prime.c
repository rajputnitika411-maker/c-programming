#include<stdio.h>
int main()
{int count =0, n,i;
printf("enter the number");
scanf("%d",&n);
for(i=2;i<n;i++)
{ 
  if (n%i==0)
  {
    printf("factor=%d",i);
    count++;
  }
}
  if(count==0)
  {printf("%d is a prime no",n);
}
else
{printf("%d is not a prime no",n);
}
return 0;
}