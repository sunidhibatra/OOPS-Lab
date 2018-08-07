#include<stdio.h>


long int fact(int f)
{
if(f>=1)
return f*fact(f-1);
else
return 1;
}

void main()
{
int f;
scanf("%d",&f);
long int s=fact(f);
printf("%ld",s);

}

