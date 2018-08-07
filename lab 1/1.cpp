#include<stdio.h>

int main()
{
	int x,y,rem,result;
	scanf("%d",&x);
	scanf("%d",&y);
	
	rem=x%y;
	result=x+(rem-1);
	printf("%d",result);
	return 0;
}
