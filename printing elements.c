#include <stdio.h>
int main()
{
    int a[100],i,n,b,size;
    printf("Enter num of elements=");
    scanf("%d",&size);

    printf("Enter %d elements=",size);
    
    for(i=0;i<size;i++) 
    scanf("%d",&a[i]);
    printf("The arr is=");
    
    for(i=0;i<size;i++)
    printf(" %d ",a[i]);
    return 0;
}
