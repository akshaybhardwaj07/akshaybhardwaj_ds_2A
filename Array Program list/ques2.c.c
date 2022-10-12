#include<stdio.h>
void main()
{
    int A[100],i,n,pos,x;
    printf("\n Enter no of elements in array:");
    scanf("%d",&n);
    printf("\n Enter elements of array:");
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
    printf("\n Enter element to be inserted and position:");
    scanf("%d%d",&x,&pos);
    for(i=n;i>=pos;i--)
        A[i]=A[i-1];
            A[pos-1]=x;
    printf("\n Changed array is:\n");
    for(i=0;i<=n;i++)
        printf("%d ",A[i]);

}
