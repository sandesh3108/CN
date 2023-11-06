#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number of inputs(<12):");
	scanf("%d",&n);
	int arr[n],i,j,sum;
	printf("Enter the inputs:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf(" The input binary array is:");
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	j=0;
	for(i=n-1;i>=0;i--)
	{
		 sum+=(arr[i]*(pow(2,j)));
		j++;
	}
	
	printf("\n\nThe decimal is: %d",sum);
}
