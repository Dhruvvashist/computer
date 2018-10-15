#include<stdio.h>

int main()
{
	int a[5]={1,2,3,4,5},i;
	
	for(i=0;i<=4;i++)
	{
		printf("%d",a[i]);
		
	}
	
	a[6]=7;
	
	printf("%d",a[6]);
	
	return(0);

}
