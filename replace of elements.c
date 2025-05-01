#include <stdio.h>
int main() 
{
    int a[4]={1,2,3,4},i,n,b;
     for(i=0;i<4;i++)
    printf("%d",a[i]);
    printf("Enter the position to replace=");
    scanf("%d",&n);
    
    printf("Enter the number to replace=");
    scanf("%d",&b);
    
    for(i=0;i<4;i++)
    {
        if(i==n-1)
        a[i]=b;
    }
    
    for(i=0;i<4;i++)
    printf(" %d ",a[i]);
    return 0;
}
