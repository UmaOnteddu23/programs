#include<stdio.h>
int main()
{
    int i,n,arr[10],sum=0,result;
    scanf("%d",&n);
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++)
    {
        sum+=arr[i];
    }
    result=sum/n-1;
    printf("The number of chocolates that A can get is:%d",result);
    return 0;
}
