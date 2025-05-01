#include<stdio.h>
int main() 
{
int a[100],i,n,b,z;
printf("Enter no.of elements=");
scanf("%d",&z);

printf("Enter %d elements=",z);

for(i=0;i<z;i++) 
scanf("%d",&a[i]);
 
printf("Enter the num to delete it=");
scanf("%d",&n);
 
for(i=n-1;i<z;i++)
 {
 a[i]=a[i+1];
 }
 printf("The arr is=");
 
 for(i=0;i<z-1;i++)
 printf(" %d ",a[i]);
 return 0;
 }
