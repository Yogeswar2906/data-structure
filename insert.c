#include <stdio.h>
int main() {
    int a[4]={1,2,3,4},i,n,b;
    
    for(i=0;i<4;i++)
    printf("%d",a[i]);
    
    printf("Enter the position to insert=");
    scanf("%d",&n);
    
    printf("Enter the num to insert=");
    scanf("%d",&b);
    
    for(i=4;i>n-1;i--)
    {
      a[i]=a[i-1];
    }
    a[n-1]=b;
    printf("The array is=");
    
    for(i=0;i<5;i++)
    printf(" %d ",a[i]);
    return 0;
}
