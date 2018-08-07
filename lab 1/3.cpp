#include<stdio.h>
#include<math.h>

int main()
{
	int i,s,x,j;
	for(i=1;i<=9;i++)
	{
	 for(j=1;j<=9;j++)
	  {

	      if(i!=j)
            x=i*1100+j*11;
           s=sqrt(x);
          if(s*s==x)
            printf("%d",x);
	  }
	}
	return 0;
}
