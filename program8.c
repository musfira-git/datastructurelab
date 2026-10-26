#include <stdio.h>
int main()
{
int mark[10],i,n,sum=0,average;
printf("enter number of elements:");
scanf("%d",&n);
for(i=0;i<n;++i)
{
printf("enter number%d:",i+1);
scanf("%d",&mark[i]);
sum+=mark[i];
}
average=sum/n;
printf("average=%d",average);
}

