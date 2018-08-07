#include<stdio.h>

int main()
{
	int n,a,count=0;
	scanf("%d", &n);
	while(n>0)
	{
		a=n%10;
		n=n/10;
		count++;
	}
	printf("%d",count);
	return 0;
}
