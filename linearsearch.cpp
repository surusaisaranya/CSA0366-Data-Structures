#include <stdio.h>
int main()
{
	int a[10],i,n,found,search;
	printf ("enter the size of the array:");
	scanf ("%d",&n);
	printf ("enter the elements of an array:");
	for (i=0;i<n;i++)
	{
		scanf ("%d",&a[i]);
	}
	printf ("enter the element to search:");
	scanf ("%d",&search);
	found=0;
	for (i=0;i<n;i++)
	{
		if (a[i]==search)
		{
			found=1;
			break;
		}
	}
		if (found==1)
		{
			printf ("%d is found",search);
		}
		else
		{
			printf ("not found");
		}
	
	return 0;
}
