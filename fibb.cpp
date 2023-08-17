#include <stdio.h>
int main()
{
	int n,i,sum=0,n3;
	printf ("enter the size of the numbers:");
	scanf ("%d",&n);
	int n1=0;
	int n2=1;
	for (i=2;i<=n;i++)
	{
		sum=sum+n1;
		n3=n1+n2;
		n1=n2;
		n2=n3;
	}
	printf ("%d",sum);
	return 0;
}
