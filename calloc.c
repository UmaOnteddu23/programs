#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n;
    printf("Enter the Limit: ");
    scanf("%d",&n);
    int *ptr=(int *)calloc(n,sizeof(int));
    if(ptr==NULL)
    {
        printf("Memory not available");
        exit(1);
    }
    printf("\nEnter the integer values: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",ptr+i);
    }
    for(i=0;i<n;i++)
    {
       // printf("\nThe values are: ");
        printf("\n%d : %d",&ptr+i,*(ptr+i));
    }
     return 0;
}
