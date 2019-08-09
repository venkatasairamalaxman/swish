#include<stdio.h>
#include<math.h>
int main()
{
float c,d;
scanf("%f%f",&c,&d);
float n,d1;
int s1=0;
while(c!=0)
{
d1=d/100*c;
n=floor(c-d1);
s1=s1+c;
c=n;
}
printf("%d\n",s1);
}
