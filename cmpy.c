#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20]="nitika";
char s2[20]="vansh";

int result =strcmp(s1,s2);
if (result>0)
printf("string 1 is greater");
else if (result<0)
printf("string second is greater");
else
printf("both are equal");
return 0;
}
