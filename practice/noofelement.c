#include <stdio.h>

int main(void) {
	int i,j,k,count;
	char a[30];
	scanf("%s",&a);
	for(i=0;i<strlen(a);i++)
	{
		count=1;
		for(j=i+1;j<strlen(a);j++)
		{
			if(a[i]==a[j])
			{
				count++;
				for(k=j+1;k<strlen(a);k++)
					a[k-1]=a[k];
					a[k-1]='\0';
			}
		}
	printf("%c - %d\n",a[i],count);
	}printf("%s",a);
	return 0;
}
