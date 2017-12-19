#include <stdio.h>

int main(void) 
{
	int a[10],n,i,max;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	max=a[0];
	for(i=1;i<n;i++)
	{
		if(max<a[i])
		max=a[i];
	}
	printf("%d",max);
	return 0;
}
