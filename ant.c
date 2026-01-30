#include<stdio.h>
int main()
{
    int i,count=0;
    int arr[50];
    for(i=0;i<50;i++)
    {
        scanf("%d",arr[i]);
    }
    for(i=0;i<50;i++)
    {
        if(arr[i]==1 && arr[i+1]==-1)
        {
            count++;
        }
       // printf("%d",count);
        }
        printf("%d",count);
        return 0;
}
