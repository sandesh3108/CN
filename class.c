#include<stdio.h>
int checkclass(int firstoct)
{
		if(firstoct>=0 && firstoct<=127)
	{
		printf("\nThe IP address belongs to class 'A'");
	}
	else if(firstoct>=128 && firstoct<=191)
	{
		printf("\nThe IP address belongs to class 'B'");
	}
	else if(firstoct>=192 && firstoct<=223)
	{
		printf("\nThe IP address belongs to class 'C'");
	}
	else if(firstoct>=224 && firstoct<=239)
	{
		printf("\nThe IP address belongs to class 'D'");
	}
	else if(firstoct>=225 && firstoct<=255)
	{
		printf("\nThe IP address belongs to class 'E'");
	}
}
int main()
{
	char arr[15],arr1[14];
	int i=0,j=0,k=0,ck[4];
	printf("Enter the valid IP address:");
	
		scanf("%s",&arr[i]);
	
	
	for(i=0;i<15;i++)
	{
		if(arr[i]!='.')
		{
			arr1[j]=arr[i];
			j++;
		}
		else
		{
			ck[k]=atoi(arr1);
			checkclass(ck[k]);
		}
	}

}
