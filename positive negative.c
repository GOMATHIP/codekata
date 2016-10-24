#include<stdio.h>
void main()
{
int a;
printf("Enter value");
scanf("%d",&a);
if(a==0)
printf("zero");
else if(a!=0)
printf("%s",a>0?"positive":"negative");
}
