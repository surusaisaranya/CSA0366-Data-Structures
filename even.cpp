#include <stdio.h>
int main()
{
	int a[10],i,n;
	printf ("enter the size of the array:");
	scanf ("%d",&n);
	printf ("enter the elements of the array:");
	for (i=0;i<n;i++)
	{
		scanf ("%d",&a[i]);
	}
	printf ("even numbers:");
	for (i=0;i<n;i++)
	{
		if (a[i]%2==0)
		{
			printf (" %d",a[i]);
		}
	}
	printf ("odd numbers:");
	for (i=0;i<n;i++)
	{
		if (a[i]%2!=0)
		{
		
		printf (" \n %d",a[i]);
	}
	}
	return 0;
}
