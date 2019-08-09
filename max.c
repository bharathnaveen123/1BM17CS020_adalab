#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i,n,max,a[100];
    printf("enter the no of elements  :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        a[i]=rand()%100;
    printf("\n the elements are  : ");
     for(i=0;i<n;i++)
    {

        printf("  %d",a[i]);
    }
    max=a[0];
    for(i=1;i<n;i++)
    {

        if(a[i]>max)
            max=a[i];
    }
    printf("\nMax element   : %d",max);

}
