#include<stdio.h>
int main(){
    int key ,found=0,arr[100],i,n;
    printf("Enter number of elements:");
    scanf("%d",&n);
for(i=0;i<n;i++)
{scanf("%d",&arr[i]);
}
printf("enter the key");
scanf("%d",&key);
for(i=0;i<n;i++)
{if(arr[i]==key)
{found=1;
break;
}
}
if(found==1)
printf("key found at position %d",i+1);
else
printf("key not found");
return 0;
}