#include <stdio.h>
void bubble_sort(int a[50], int n)
{
    int i,j,t;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if (a[j] > a[j+1])
			{
			 	t=a[j];
				a[j]=a[j+1];
				a[j+i]=t;
			}
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
    bubble_sort(a, n);
    printf("After sorting\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}