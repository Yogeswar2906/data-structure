#include <stdio.h>
int main() 
{
    int a[100]={1,2,3,4},i,n;
    printf("Enter the num to search=");
    scanf("%d",&n);
    for(i=0;i<100;i++)
    {
        if(a[i]==n)
        {
		printf("Yes element is presented");
        return 0;
		}
    }
    printf("element is not presented");
    return 0;
}
