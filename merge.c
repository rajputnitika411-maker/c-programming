#include<stdio.h>
int main()
{int a[20],b[20],c[50],i,n1,n2,n3;
printf("enter the size of first array:\n");
scanf("%d",&n1);
printf("enter the elements of first array:\n");
for(i=0;i<n1;i++)
{
    scanf("%d",&a[i]);
}
 printf("enter the size of second array:\n");
scanf("%d",&n2);
printf("enter the elements of second array:\n");
for(i=0;i<n2;i++)
{
    scanf("%d",&b[i]);
}
n3=n1+n2;
for(i=0;i<n1;i++)
{
    c[i]=a[i];
}
for(i=0;i<n2;i++)
{
    c[n1+i]=b[i];
}
printf("the merged array is:\n");
for(i=0;i<n3;i++)
{
    printf("%d ",c[i]);
}
return 0;
}