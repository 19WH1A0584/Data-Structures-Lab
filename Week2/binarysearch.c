#include <stdio.h>
int binary_search(int first, int last, int a[50], int key)
{
	int pos=-1;
	while(first <= last)
	{
		int mid = (first + last)/ 2;
		if(a[mid] == key)
		{
			pos=mid;
			break;
		}
		else if(a[mid] < key)
		{
			first = mid+1;
		}
		else
		{
			last = mid-1;
		}
	}
	return pos;
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