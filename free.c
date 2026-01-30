#include<stdio.h>
#include<stdlib.h>
int * getting_value()
{
    int i;
    int *ptr=(int *)malloc(5*sizeof(int));
    printf("Enter the values: ");
    for(i=0;i<5;i++)
    {
        scanf("%d ",ptr+i);
    }
    return ptr;
}
int main()
{
    int i,sum=0;
    int *ptr=getting_value();
    for(i=0;i<5;i++)
    {
        sum+=*(ptr+i);
    }
    printf("%d",sum);
    free(ptr);
    ptr=NULL;
}
