#include<stdio.h>
int classbin(int arr[8])
{
	if(arr[0]==0)
	{
		printf("The IP is belongs to class 'A'!");
	}
	else if(arr[1]==0)
	{
		printf("The IP is belongs to class 'B'!");
	}
	else if(arr[2]==0)
	{
		printf("The IP is belongs to class 'C'!");
	}
	else if(arr[3]==0)
	{
		printf("The IP is belongs to class 'D'!");
	}
	else
	{
		printf("The IP is belongs to class 'E'!");
	}
}
int main()
{
	int arr[8],i;
	printf("Enter the first octet of IP address:");
	for(i=0;i<8;i++)
	{
		scanf("%d",&arr[i]);
	}
	classbin(arr);
}
