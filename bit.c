#include<stdio.h>
int main()
{
	int i,j,n,count=0;
	
	printf("Enter the number of inputs:");
	scanf("%d",&n);
	
	int arr[n];        
	printf("Enter the %d inputs:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]==1)
		{
			count++;	
			if(count==5)
		{
			for(j=n;j>i;j--)
			
			arr[j]=arr[j-1];
			arr[i+1]=0;
			n++;
			count=0;
		}
		}
		else
			{
				count=0;
			}
	}    
	printf("The resultant array is:");
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
}
