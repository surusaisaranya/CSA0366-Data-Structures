#include <stdio.h>
int main()
{
	int a[100],first,last,middle,n,search;
	printf ("enter the size of the array:");
	scanf ("%d",&n);
	printf ("enter the elements of an array:");
	for (int i=0;i<n;i++)
	{
		scanf ("%d",&a[i]);
	}
	printf ("enter the element to search:");
	scanf ("%d",&search);
	first=0;
	last=n-1;
	middle=(first+last)/2;
	while (first <= last)
	{
		if (a[middle]<search)
		first=middle+1;
		else if (a[middle]==search)
		{
			printf ("element is found");
			break;
		}
		else
			last=middle-1;
			middle=(first+last)/2;
	}
	if (first>last)
	{
		printf ("element not found");
	}
	return 0;
}
