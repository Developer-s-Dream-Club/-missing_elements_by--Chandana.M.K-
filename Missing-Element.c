#include<stdio.h>
int main()
{
    int i,j,m,n,a[10];
    printf("Enter the size of the array N = ");
    scanf("%d",&n);
    printf("Enter the %d array elements : ",n-1);
    for(i=0;i<n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n-2;i++)
    {
        if(a[i+1]!=a[i]+1)
        printf("Missing number is -> %d ",a[i]+1);
        
    }
}
