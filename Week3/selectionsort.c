#include <stdio.h>
void selection_sort(int a[50], int n)
{
    int i,j,t,min;
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if (a[j] < a[min])
			{
			 	min=j;
			}
			t=a[min];
			a[min]=a[i];
			a[i]=t;
		}
	} 
}		
 
int main() 
{ 
    int n,a[50],i;
    scanf("%d",&n);
    for(int i=0; i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    selection_sort(a, n);
    printf("After sorting\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}