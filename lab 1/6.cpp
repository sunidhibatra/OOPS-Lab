#include<stdio.h>
#include<string.h>

int concat(char *p, char *q, int x , int y)
{
	char u[200];
	int b,a;
	for(a=0;a<x;a++)
	u[a]=p[a];
	for(a=x,b=0;a<(x+y);a++,b++)
	u[a]=q[b];
printf("%s",u);
return 0;
}
int main()
{
	char s[100],t[100];
	int i,j;
	scanf("%s",&s);
	scanf("%s",&t);
	i= strlen(s);
	j= strlen(t);
   concat(s,t,i,j);
   return 0;
}
