#include <stdio.h>
int binary_search(int first, int last, int a[50], int key)
{
	if(first <= last)
	{
		int mid = (first + last)/ 2;
		if(a[mid] == key)
		{
			return mid;
		}
		else if(a[mid]<key)
		{
			binary_search(mid + 1,last,a,key);
		}
		else
			binary_search(first,mid - 1,a,key);
	}
	return -1;
}
int main()
{
	int i,pos,first,last,key,a[50];
	scanf("%d",&first);
	for(i=0;i<first;i++)
	scanf("%d",&a[i]);
	scanf("%d",&key);
	pos= binary_search(0,first-1,a,key);
	if(pos==-1)
	{
		printf("element not present");
	}
	else
	{
		printf("element present at position %d",pos+1);
	}
}