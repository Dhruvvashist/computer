#include<stdio.h>

int main()
{
	int a[20],i,n,x,b;
	
	printf("No. of elements in the vector:");
	scanf("%d",&n);
	
	
	printf("Enter the elments in the vector");
	
	
	for(i=0;i<n;i++)
	   {
	    scanf("%d",&a[i]);
       }  
	
	printf("Enter the place in which you want to insert the no. :");
	scanf("%d",&x);
	
	printf("Enter the no. :");
	scanf("%d",&b);
	
	for(i=n;i>=x;i--)
	{
		a[i]=a[i-1];
	}
	
	
	a[x-1]=b;
	
	for(i=0;i<=n;i++)
	   {
	    printf("\n%d",a[i]);
       }  
	
	
}
