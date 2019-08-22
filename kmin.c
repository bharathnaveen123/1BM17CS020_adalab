#include<stdio.h>
int ksmall(int a[],int n,int k)
{
	int i,j,temp,min;
	for(i=0;i<k;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}
	return a[k-1];
}

void main()
{
	int k,y,n,i;
	int a[10];
	printf("enter the no of elements");
	scanf("%d",&n);
	printf("enter the array elements");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("enter k :");
	scanf("%d",&k);
	printf(" %d st smallest %d",k,ksmall(a,n,k));
}



