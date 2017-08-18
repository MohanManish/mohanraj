#include<stdio.h>
void main()
{
float n;
printf("enter the number:");
scanf("%f",n);
if(n<=0)
{
if(n==0)
printf("the num is zero");
else
printf("the num is negative");
}
else
printf("the num is positive");
return 0;
}
