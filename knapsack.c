
#include<stdio.h>
 

int max(int a, int b)
{
return (a > b)? a : b;
}
 
int knapSack(int W, int wt[], int val[], int n)
{
int i, w;
   int K[n+1][W+1];
 
   
   for (i = 0; i <= n; i++)
   {
       for (w = 0; w <= W; w++)
       {
           if (i==0 || w==0)
               K[i][w] = 0;
           else if (wt[i-1] <= w)
                 K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]],  K[i-1][w]);
           else
                 K[i][w] = K[i-1][w];
       }
   }
 
   return K[n][W];
}
 

int main()
{
int val[10],wt[10],W,n;
int i;
printf("enter no of  elements: ");
scanf("%d",&n);

printf("\n enter the capacity   :");
scanf("%d",&W);

printf("\n enter weght   :\n");
for(i=0;i<n;i++){
scanf("%d",&wt[i]);
}

printf("\n enter  value  :\n");
for(i=0;i<n;i++){
scanf("%d",&val[i]);
}

printf("Ans=   %d", knapSack(W, wt, val, n));
return 0;
} 