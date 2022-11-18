#include<stdio.h>
int linear_search(int a[],int x,int n)
{
	for (int i = 0; i < n; ++i)
	{
		if(a[i]==x)
		return i;
	}
	return-1;
}
int main()
{
	int a[100],i,x,n;
	printf("enter the size of array",n);
	scanf("%d",&n);
	printf("enter the elements of array");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	
	}
	printf("enter the element to be searched");
	scanf("%d",&x);
	int result = linear_search(a,x,n);
	if(result==-1)
	{
		printf("not found");
	}
	else
	{
		printf("element found at %d",result);
	}
	return 0;
}