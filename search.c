#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i,n,a[100],l=0,h=0,j,temp,k,flag=0,mid;
    printf("enter no of elements :");
    scanf("%d",&n);
    h=n-1;
    for(i=0;i<n;i++)
    {

        a[i]=rand()%100;
    }
    printf("the elements are :  ");
    for(i=0;i<n;i++)
    {

        printf("  %d",a[i]);
    }
    //sort(a);
    for(i=0;i<n-1;i++)
    {

        for(j=0;j<n-i-1;j++)
        {

            if(a[j]>a[j+1])
            {

                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("\n\nthe elements are :  ");
    for(i=0;i<n;i++)
    {

        printf("  %d",a[i]);
    }

    printf("\n enter the element to search  :");
    scanf("%d",&k);

    while(l<=h)
    {
        mid=(l+h)/2;
        if(a[mid]==k)
        {

            printf("%d is found at pos %d",k,mid+1);
            flag=1;
            break;
        }
        else if(k>a[mid])
        {

            l=mid+1;

        }
        else
            h=mid-1;
    }
    if(flag!=1)
    {

        printf("not found");
    }
}
