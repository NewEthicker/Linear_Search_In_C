#include<stdio.h>
int main()
{
    int size=0,i=0,j=0,flag=0;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int arr[size],item=0;
    for(i=0;i<size;i++)
    {
        printf("Enter element[%d] ",i);
        scanf("%d",&arr[i]);
    }
    printf("The elements are:\n");
    for(i=0;i<size;i++)
    {
        printf("%d\n",arr[i]);
    }
    printf("Enter the element to search it in array: ");
    scanf("%d",&item);
    for(i=0;i<size;i++)
    {
        if(arr[i]==item)
        {flag=flag+1;
        break;}
        else
        {flag=0;}
    }
    switch(flag)
    {
        case 1:printf("Element found at index: %d -> %d",i,arr[i]);break;
        case 0:printf("Element not found");break;
    }
}
