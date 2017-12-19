#include<stdio.h>
int main(void)
{
int a=9,i=0,b,c;
for(i=0;i<4;i++)
{
b+=a*pow(10,i);
c+=b;
}
printf("%d",c);
}
