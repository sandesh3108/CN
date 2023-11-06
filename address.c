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
	char arr[15],arr1[14][4];
	int i=0,j=0,k=0,ck[4][4],s=0;
	printf("Enter the valid IP address:");
	
		scanf("%s",&arr[i]);
	
	
	while(i<15)
	{
		if(arr[i]!='.')
		{
			arr1[j][s]=arr[i];
			j++;
			i++;
			
		}
		else
		{
			ck[k][s]=atoi(arr1);
			checkclass(ck[k][s]);
			i++;
		}
		s++;
	}

}
