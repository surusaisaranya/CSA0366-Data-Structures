#include <stdio.h>
int main()
{
	int a[10],i,n,j,k,temp;
	printf ("enter the size of the array:");
	scanf ("%d",&n);
	printf ("enter the elements of an array:");
	for (i=0;i<n;i++)
	{
		scanf ("%d",&a[i]);
	}
	for (i=0;i<n;i++)
	{
		for (j=i+1;j<n;j++)
		{
		if (a[i]>a[j])
		{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
		}
	}
	printf ("ascending order:");
	for (i=0;i<n;i++)
	{
		printf (" %d",a[i]);
	}
	printf ("\n");
	for (i=0;i<n;i++)
	{
		for (j=i+1;j<n;j++)
		{
		if (a[i]<a[j])
		{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
		}
	}
	printf ("descending order:");
	for (i=0;i<n;i++)
	{
		printf (" %d",a[i]);
	}
	printf ("\n");
	return 0;
}
