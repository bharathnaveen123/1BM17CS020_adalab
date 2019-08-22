#include<stdio.h>
int klarge(int a[],int n,int k)
{
	int i,j,temp,max;
	for(i=0;i<k;i++)
	{
		max=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]>a[max])
			{
				max=j;
			}
		}
		temp=a[i];
		a[i]=a[max];
		a[max]=temp;
		printf("   %d",a[i]);
	}
}

void main()
{
	int k,n,i;
	int a[10];
	printf("enter the no of elements");
	scanf("%d",&n);
	printf("enter elements :");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("enter k :");
	scanf("%d",&k);
	klarge(a,n,k);
}